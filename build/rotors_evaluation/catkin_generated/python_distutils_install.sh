#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/src/CrazyS/rotors_evaluation"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/install/lib/python2.7/dist-packages:/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/build/rotors_evaluation/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/build/rotors_evaluation" \
    "/usr/bin/python" \
    "/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/src/CrazyS/rotors_evaluation/setup.py" \
    build --build-base "/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/build/rotors_evaluation" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/install" --install-scripts="/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/install/bin"
