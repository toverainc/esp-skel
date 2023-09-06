# ESP-ADF skeleton

## About

This is a minimal skeleton to start an ESP-ADF project. We override
COMPONENTS in the top-level CMakeLists.txt to avoid building unused
ESP-ADF components to keep it as minimal as possible.

We then include the audio_hal component in the component CMakeLists.txt,
to expose the audio board selection in menuconfig.

## Usage

The quickest way to get started is to use an ESP-IDF container.

Start the container:

```
podman run --rm -it espressif/idf:v4.4.5
```

In the container, run these commands:

```
cd /opt/esp
git clone --depth=1 --recursive --shallow-submodules https://github.com/espressif/esp-adf.git adf
cd adf
export ADF_PATH=$PWD

cd
git clone https://github.com/toverainc/esp-skel.git
cd esp-skel/adf

echo "CONFIG_ESP32_S3_BOX_LITE_BOARD=y" > sdkconfig.defaults
idf.py set-target esp32s3
idf.py build
```
