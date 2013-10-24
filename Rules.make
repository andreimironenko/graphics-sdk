#Rules.make

################# FIELDS MODIFIABLE BY THE USER ###############################
############### All the fields below are mandatory ############################
# Set home area (ex /home/user123/)
HOME=/proj/SGX_Graphics/releases/sdk

# Set installation folder (typically, OMAP35x_Graphics_***)
GRAPHICS_INSTALL_DIR?=$(HOME)/Graphics_SDK_4_04_00_02

# Location of demo executables and install information
GFX_DEMOS_EXECPATH=$(GRAPHICS_INSTALL_DIR)/gfxsdkdemos

# Toolchain path
CSTOOL_DIR?=/proj/AVME10/mahesh/Graphics/toolchain/arm-2009q1
#CSTOOL_DIR=/proj/productization/workdir/mahesh/toolchain/Sourcery_G++_Lite/bin
CSTOOL_PREFIX?=arm-none-linux-gnueabi-
CSTOOL_PATH=?$(CSTOOL_DIR)/bin
CSTOOL_LIBSTDC++_PATH?=$(CSTOOL_DIR)/arm-none-linux-gnueabi/libc/usr/lib

# Set the kernel installation path
#KERNEL_INSTALL_DIR=/proj/productization/workdir/mahesh/linux/AM45X/linux-am45x
#KERNEL_INSTALL_DIR=/proj/SGX_Graphics/prathap/centaurus/TI814X-LINUX-PSP-04.01.00.05/src/kernel/linux-04.01.00.05
#KERNEL_INSTALL_DIR=/proj/SGX_Graphics/prathap/omap3-kernel/AM35x-OMAP35x-LINUX-PSP-04.02.00.07/src/kernel/linux-04.02.00.07
KERNEL_INSTALL_DIR?=/proj/productization/workdir/mahesh/linux/TI816X-LINUX-PSP-04.00.00.12/src/kernel/linux-04.00.00.12
# Target NFS root file system location
#TARGETFS_INSTALL_DIR=/home/netrauser/groups/psp/nfs_prathap
TARGETFS_INSTALL_DIR?=/home/a0756700/nfs/ea2

######################### PRE-DEFINED VARIABLES ###############################
######################## NOT MODIFIABLE BY USER ###############################

PLATFORM=LinuxOMAP3

GFX_OGLES_SDKPATH=$(GRAPHICS_INSTALL_DIR)/GFX_Linux_SDK/OGLES/SDKPackage

GFX_OGLES2_SDKPATH=$(GRAPHICS_INSTALL_DIR)/GFX_Linux_SDK/OGLES2/SDKPackage

GFX_OVG_SDKPATH=$(GRAPHICS_INSTALL_DIR)/GFX_Linux_SDK/OVG/SDKPackage

GFX_REL_ES3_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_rel_es3.x

GFX_DBG_ES3_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_dbg_es3.x

GFX_REL_ES5_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_rel_es5.x

GFX_DBG_ES5_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_dbg_es5.x

GFX_REL_ES6_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_rel_es6.x

GFX_DBG_ES6_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_dbg_es6.x

GFX_REL_ES7_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_rel_es7.x

GFX_DBG_ES7_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_dbg_es7.x

GFX_REL_ES2_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_rel_es2.x

GFX_DBG_ES2_LIB_SRCPATH=$(GRAPHICS_INSTALL_DIR)/gfx_dbg_es2.x

GFX_OGLES_REL_LIB_DESTPATH=$(GFX_OGLES_SDKPATH)/Builds/OGLES/LinuxOMAP3

GFX_OGLES2_REL_LIB_DESTPATH=$(GFX_OGLES2_SDKPATH)/Builds/OGLES2/LinuxOMAP3

GFX_OVG_REL_LIB_DESTPATH=$(GFX_OVG_SDKPATH)/Builds/OVG/LinuxOMAP3

GFX_KERNMOD_SRCPATH=$(GRAPHICS_INSTALL_DIR)/GFX_Linux_KM

GFX_PKG_TARGETFS_PATH = $(GRAPHICS_INSTALL_DIR)/targetfs

GFX_LIBRARY_TARGET_PATH = $(TARGETFS_INSTALL_DIR)/opt/gfxlibraries

GFX_DEVMEM2_SRCPATH = $(GRAPHICS_INSTALL_DIR)/tools/devmem2

# Where to copy the resulting executables and data to (when executing 'make
# install') in a proper file structure. This EXEC_DIR should either be visible
# from the target, or you will have to copy this (whole) directory onto the
# target filesystem.
EXEC_DIR=$(TARGETFS_INSTALL_DIR)/opt/gfxsdkdemos
################################################################################
