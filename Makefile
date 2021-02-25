#############################################################################
# Makefile for building: tesi
# Generated by qmake (3.1) (Qt 6.0.0)
# Project:  ..\tesi\tesi.pro
# Template: app
# Command: C:\CodeBlocks\qt\6.0.0\mingw81_64\bin\qmake.exe -o Makefile ..\tesi\tesi.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:\CodeBlocks\qt\6.0.0\mingw81_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = C:\CodeBlocks\qt\6.0.0\mingw81_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = C:\CodeBlocks\qt\6.0.0\mingw81_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = 
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: ../tesi/tesi.pro ../../qt/6.0.0/mingw81_64/mkspecs/win32-g++/qmake.conf ../../qt/6.0.0/mingw81_64/mkspecs/features/spec_pre.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/device_config.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/sanitize.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/gcc-base.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/g++-base.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/windows-vulkan.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/g++-win32.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/common/windows-desktop.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/qconfig.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_ext_freetype.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_ext_libpng.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core_qobject_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_dbus.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designer.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_entrypoint_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_gui.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_help.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_help_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_linguist.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_linguist_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_network.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_network_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_opengl.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_openglwidgets.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qml.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quick.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_sql.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svg.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svgwidgets.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svgwidgets_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_testlib.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_tools_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uitools.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_widgets.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_xml.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri \
		../../qt/6.0.0/mingw81_64/mkspecs/features/qt_functions.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/qt_config.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/win32-g++/qmake.conf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/spec_post.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/exclusive_builds.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/toolchain.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/default_pre.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/win32/default_pre.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/resolve_config.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/exclusive_builds_post.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/default_post.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/qml_debug.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/entrypoint.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/precompile_header.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/warn_on.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/qt.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/resources_functions.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/resources.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/moc.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/win32/opengl.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/uic.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/qmake_use.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/file_copies.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/win32/windows.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/testcase_targets.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/exceptions.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/yacc.prf \
		../../qt/6.0.0/mingw81_64/mkspecs/features/lex.prf \
		../tesi/tesi.pro \
		../../qt/6.0.0/mingw81_64/lib/Qt6EntryPoint.prl \
		.qmake.stash \
		../../qt/6.0.0/mingw81_64/mkspecs/features/build_pass.prf
	$(QMAKE) -o Makefile ..\tesi\tesi.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
../../qt/6.0.0/mingw81_64/mkspecs/features/spec_pre.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/device_config.prf:
../../qt/6.0.0/mingw81_64/mkspecs/common/sanitize.conf:
../../qt/6.0.0/mingw81_64/mkspecs/common/gcc-base.conf:
../../qt/6.0.0/mingw81_64/mkspecs/common/g++-base.conf:
../../qt/6.0.0/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
../../qt/6.0.0/mingw81_64/mkspecs/common/windows-vulkan.conf:
../../qt/6.0.0/mingw81_64/mkspecs/common/g++-win32.conf:
../../qt/6.0.0/mingw81_64/mkspecs/common/windows-desktop.conf:
../../qt/6.0.0/mingw81_64/mkspecs/qconfig.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_ext_freetype.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_ext_libpng.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_core_qobject_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_dbus.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designer.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_entrypoint_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_gui.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_help.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_help_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_linguist.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_linguist_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_network.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_network_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_opengl.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_openglwidgets.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_openglwidgets_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qml.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quick.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_sql.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svg.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svgwidgets.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_svgwidgets_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_testlib.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_tools_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uitools.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_widgets.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_xml.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri:
../../qt/6.0.0/mingw81_64/mkspecs/features/qt_functions.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/qt_config.prf:
../../qt/6.0.0/mingw81_64/mkspecs/win32-g++/qmake.conf:
../../qt/6.0.0/mingw81_64/mkspecs/features/spec_post.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/exclusive_builds.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/toolchain.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/default_pre.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/win32/default_pre.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/resolve_config.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/exclusive_builds_post.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/default_post.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/qml_debug.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/entrypoint.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/precompile_header.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/warn_on.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/qt.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/resources_functions.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/resources.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/moc.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/win32/opengl.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/uic.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/qmake_use.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/file_copies.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/win32/windows.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/testcase_targets.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/exceptions.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/yacc.prf:
../../qt/6.0.0/mingw81_64/mkspecs/features/lex.prf:
../tesi/tesi.pro:
../../qt/6.0.0/mingw81_64/lib/Qt6EntryPoint.prl:
.qmake.stash:
../../qt/6.0.0/mingw81_64/mkspecs/features/build_pass.prf:
qmake: FORCE
	@$(QMAKE) -o Makefile ..\tesi\tesi.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
