# Munich MUC++ Meetup Slides

A Universal Data Science Framework in C++

The slides of the C++ Meetup in Munich (January 31st, 2019) 
can be found in this folder.

The presentation is located inside the Munich-MUC++-2019.ipynb notebook.

## All presentations can be launched *interactively* on MyBinder:

Just follow this link: https://mybinder.org/v2/gh/QuantStack/quantstack-talks/muc?filepath=2019-01-30-muc%2B%2B-meetup

## More Interactive Demos Here:

To access the interactive demos *ONLINE* and *WITHOUT* installation, click the "Binder" Button on each of these. 

Like this &rarr; [![Binder](https://img.shields.io/badge/launch-binder-brightgreen.svg)](https://mybinder.org/v2/gh/QuantStack/xtensor/stable?filepath=notebooks/xtensor.ipynb)

- https://github.com/QuantStack/xeus-cling
- https://github.com/QuantStack/xtensor
- https://github.com/QuantStack/xwidgets
- https://github.com/QuantStack/xleaflet
- https://github.com/QuantStack/xplot
- https://github.com/QuantStack/xvolume

## Join the community on gitter

https://gitter.im/QuantStack/Lobby

## Abstract

The backbone of Data Science are array computing and visualization libraries. While many of these libraries, for example scikit-learn or NumPy, are utilizing fast C-code, their implementation remains bound to their dynamically interpreted host language.

This talk will present xtensor, an attempt to create a universal nD-container and array-computing library in C++. xtensor is a lightweight and modular framework that follows the idioms of the STL while providing an API that draws heavy inspiration from the widely used NumPy package. The library allows to operate in-place on data structures from Python, R and Julia. It is therefore an ideal library to write interpreter independent data science packages.

To showcase the internals of xtensor the talk will walk through a minimal reimplementation of a template expression engine in 300 lines of C++17 that supports broadcasting and lazy evaluation.

Crucial for data science is furthermore the fast and intuitive representation of data samples. The talk will highlight how the interactive C++ interpreter cling, in combination with Project Jupyter and xeus offers a native C++ solution for powerful widgets ranging from simple sliders and boxes to fully interactive maps and 3D plots.