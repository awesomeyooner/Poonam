from setuptools import find_packages
from setuptools import setup

setup(
    name='camera_driver_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('camera_driver_srvs', 'camera_driver_srvs.*')),
)
