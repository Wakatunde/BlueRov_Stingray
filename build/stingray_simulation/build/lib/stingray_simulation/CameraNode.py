import rclpy
from sensor_msgs.msg import Image
from rclpy.node import Node
import cv2
import numpy as np

class PublishCameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.device_number = 0
        self.cap = cv2.VideoCapture(self.device_number)
        self.TopicName = 'cam_feed'
        self.queSize = 20

        self.publisher = self.create_publisher(Image, self.TopicName, self.queSize)
        self.timer = self.create_timer(0.02, self.timer_callbackFunction)  # Increased timer interval to 20 ms

        self.frames = 0

    def timer_callbackFunction(self):
        success, frame = self.cap.read()
        frame = cv2.resize(frame, (820, 640), interpolation=cv2.INTER_CUBIC)

        if success:
            # Create Image message
            image_msg = Image()
            image_msg.header.stamp = self.get_clock().now().to_msg()
            image_msg.header.frame_id = 'camera_frame'
            image_msg.height = frame.shape[0]
            image_msg.width = frame.shape[1]
            image_msg.encoding = 'rgb8'
            image_msg.is_bigendian = False
            image_msg.step = 3 * frame.shape[1]
            image_msg.data = frame.tobytes()

            # Publish Image message
            self.publisher.publish(image_msg)


def main(args=None):
    rclpy.init(args=args)
    camera_node = PublishCameraNode()
    try:
        rclpy.spin(camera_node)
    except KeyboardInterrupt:
        pass
    camera_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()