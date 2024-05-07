from setuptools import find_packages
from setuptools import setup

setup(
    name='stingray_msg',
    version='0.0.0',
    packages=find_packages(
        include=('stingray_msg', 'stingray_msg.*')),
)
