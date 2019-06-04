# How to setup your system

It's recommended to use the `conda` package manager. 
To install, use this link:

https://docs.conda.io/en/latest/miniconda.html

After successfully installing conda, the following tools and libraries need to
be installed using conda:

`conda install jupyter jupyterlab ipython ipywidgets ipyleaflet bqplot -c conda-forge`

To verify your installation, start Jupyter using

jupyter notebook

then navigate to the Jupyter interface in a web browser (usually http://localhost:8888) 
and check that you can see Python 3.

Additionally, please make sure that you have a working version of git on your laptop 
since we will publish some Jupyter notebooks as a git repository.

## Using the C++ widgets

To run the C++ examples, you need to install another Jupyter kernel from conda,
and xwidgets & co.

`conda install xeus-cling xwidgets xplot xleaflet`

Then, in the notebook interface, select the C++14 kernel to run the examples.

*Note at this point in time, xeus-cling does not work on Windows!*

## No time to install / using Windows

Luckily most of the shown projects have a Binder - this can be used to remotely
start a Jupyter instance that has the libraries and tools installed. 

Just look for the Binder button in the README's of:

- [xwidgets](https://github.com/QuantStack/xwidgets) / 
  [xwidgets Binder](https://mybinder.org/v2/gh/QuantStack/xwidgets/stable?filepath=notebooks/xwidgets.ipynb)
- [xplot](https://github.com/QuantStack/xplot)
  [xplot Binder](https://mybinder.org/v2/gh/QuantStack/xplot/stable?filepath=notebooks)
- [ipyvolume Examples](https://ipyvolume.readthedocs.io/en/latest/)

## A list with cool Jupyter things


