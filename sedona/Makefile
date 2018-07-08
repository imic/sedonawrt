##############################################
# OpenWrt Makefile for the Sedona Virtual Machine 
# package.
#
# Based on helloworld example and instructions at 
# http://www.gargoyle-router.com/wiki/doku.php?id=openwrt_coding
#
#
# Most of the variables used here are defined in
# the include directives below. We just need to 
# specify a basic description of the package, 
# where to build our program, where to find 
# the source files, and where to install the 
# compiled program on the router. 
# 
# Be very careful of spacing in this file.
# Indents should be tabs, not spaces, and 
# there should be no trailing whitespace in
# lines that are not commented.
# 
##############################################

include $(TOPDIR)/rules.mk

# Name and release number of this package
PKG_NAME:=sedona
PKG_RELEASE:=4


# This specifies the directory where we're going to build the program.  
# The root build directory, $(BUILD_DIR), is by default the build_mipsel 
# directory in your OpenWrt SDK directory
PKG_BUILD_DIR := $(BUILD_DIR)/$(PKG_NAME)


include $(INCLUDE_DIR)/package.mk



# Specify package information for this program. 
# The variables defined here should be self explanatory.
define Package/sedona
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=Sedona -- provides the Sedona SVM
endef


# This is the way to set the description in Kamikaze. For older versions look for the original helloworld example
define Package/sedona/description
	Provides the Sedona Virtual Machine
	which is used for control algorithms.
	See http://www.sedonadev.org for more info
endef



# Specify what needs to be done to prepare for building the package.
# In our case, we need to copy the source files to the build directory.
# This is NOT the default.  The default uses the PKG_SOURCE_URL and the
# PKG_SOURCE which is not defined here to download the source from the web.
# In order to just build a simple program that we have just written, it is
# much easier to do it this way.

#I assume that you've run makeunixvm locally and copied the staged code
#$(CP) ~/sedonadev/temp/generic-unix/* ./native/
define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./native/* $(PKG_BUILD_DIR)/
endef


# We do not need to define Build/Configure or Build/Compile directives
# The defaults are appropriate for compiling a simple program such as this one


# Specify where and how to install the program. 
# The $(INSTALL_DIR) variable contains a command to prepare the install directory 
# if it does not already exist.  
# Likewise $(INSTALL_BIN) contains the command to copy the binary file from its 
# current location (in our case the build directory) to the install directory.
# $(PKG_BUILD_DIR) is the build directory where our compiled executables are 
# created. 
# $(INSTALL_DATA) and $(INSTALL_CONF) are also commands to copy files.  But without
# the execute bit set.  
# The $(1) variable represents the root directory on the router running OpenWrt. 
# So this define does as follows (line by line):
# Make the parent folder if it does not exist already.  
# Install the svm binary  by copying it to the /usr/sbin directory on the router. 
# Make the parent folder if it does not exist already.  
# Install app.sab to the /opt/sedona directory on the router. 
# Install kits.scode to the /opt/sedona directory on the router. 
# Make the parent folder if it does not exist already.  
# Install the run command script to /etc/hotplug.d/iface on the router. 
# Make the parent folder if it does not exist already.  
# Install the run command script to /etc/init.d on the router. 
define Package/sedona/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/svm $(1)/usr/sbin/
	$(INSTALL_DIR) $(1)/opt/sedona
	$(INSTALL_DATA) ./files/app.sab $(1)/opt/sedona
	$(INSTALL_DATA) ./files/kits.scode $(1)/opt/sedona
	$(INSTALL_DIR) $(1)/etc/hotplug.d/iface
	$(INSTALL_BIN) ./files/sedona.hotplug $(1)/etc/hotplug.d/iface/30-sedona
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/sedona.rc $(1)/etc/init.d/sedona
endef


# This line executes the necessary commands to compile our program.
# The above define directives specify all the information needed, but this
# line calls BuildPackage which in turn actually uses this information to
# build a package.
$(eval $(call BuildPackage,sedona))

