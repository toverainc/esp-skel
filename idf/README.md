# ESP-IDF skeleton

## About

This is a minimal skeleton to start an ESP-IDF project.


## Usage

The quickest way to get started is to use an ESP-IDF container.

Start the container:

```
podman run --rm -it espressif/idf:v5.1.1
```

In the container, run these commands:

```
cd
git clone https://github.com/toverainc/esp-skel.git
cd esp-skel/idf

idf.py set-target esp32s3
idf.py build
```
