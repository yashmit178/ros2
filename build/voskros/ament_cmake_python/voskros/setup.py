from setuptools import find_packages
from setuptools import setup

setup(
    name='voskros',
    version='1.1.0',
    packages=find_packages(
        include=('voskros', 'voskros.*')),
)
