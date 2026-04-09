from setuptools import setup, Extension
import glob
import os

# setup.py の場所を基準にする
here = os.path.dirname(os.path.abspath(__file__))
src_dir = os.path.join(here, "src")

# setuptools は相対パスを要求するので、絶対パスから相対パスに変換
sources = [os.path.relpath(f, here) for f in glob.glob(os.path.join(src_dir, "*.cpp"))]

setup(
    name="py_FASPR",
    version="0.2.0",
    packages=["py_FASPR"],
    package_data={"py_FASPR": ["data/*"]},
    ext_modules=[
        Extension(
            name="py_FASPR._core",
            sources=sources,
            extra_compile_args=["-std=c++17"],
        ),
    ],
)