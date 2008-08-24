#!/bin/sh

DIR=`dirname $0` &&
#---------------------------------------------------------------------------- Project
rm -f ${DIR}/actual_templates/project/project_xcode/English.lproj/* &&
cp ${DIR}/PROJECT/project_xcode/English.lproj/Credits.rtf ${DIR}/actual_templates/project/project_xcode/English.lproj/Credits.rtf &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/PROJECT.xcodeproj/project.pbxproj > ${DIR}/actual_templates/project/project_xcode/project.pbxproj &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/Info.plist > ${DIR}/actual_templates/project/project_xcode/Info.plist &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/English.lproj/InfoPlist.strings > ${DIR}/actual_templates/project/project_xcode/English.lproj/InfoPlist.strings &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/main.m > ${DIR}/actual_templates/project/project_xcode/main.m &&
rm -f ${DIR}/actual_templates/project/galgas_sources/* &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/build.bat > ${DIR}/actual_templates/project/galgas_sources/build.bat.txt &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/_all_PROJECT.ggs > ${DIR}/actual_templates/project/galgas_sources/_all_PROJECT.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_cocoa.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_cocoa.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_grammar.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_grammar.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_lexique.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_lexique.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_options.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_options.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_program.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_program.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_semantics.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_semantics.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_syntax.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_syntax.ggs &&
rm -f ${DIR}/actual_templates/project/hand_coded_sources/* &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/hand_coded_sources/PROJECT_computations.cpp > ${DIR}/actual_templates/project/hand_coded_sources/PROJECT_computations.cpp &&
#--- Makefile makefile_macosx
rm -f ${DIR}/actual_templates/project/makefile_macosx/* &&
cp ${DIR}/PROJECT/makefile_macosx/build.command ${DIR}/actual_templates/project/makefile_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_macosx/build64.command ${DIR}/actual_templates/project/makefile_macosx/build64.command &&
cp ${DIR}/PROJECT/makefile_macosx/clean.command ${DIR}/actual_templates/project/makefile_macosx/clean.command &&
cp ${DIR}/PROJECT/makefile_macosx/clean64.command ${DIR}/actual_templates/project/makefile_macosx/clean64.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx/makefile > ${DIR}/actual_templates/project/makefile_macosx/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx/makefile64 > ${DIR}/actual_templates/project/makefile_macosx/makefile64 &&
#--- Makefile makefile_macosx_ppc
rm -f ${DIR}/actual_templates/project/makefile_macosx_ppc/* &&
cp ${DIR}/PROJECT/makefile_macosx_ppc/build.command ${DIR}/actual_templates/project/makefile_macosx_ppc/build.command &&
cp ${DIR}/PROJECT/makefile_macosx_ppc/build64.command ${DIR}/actual_templates/project/makefile_macosx_ppc/build64.command &&
cp ${DIR}/PROJECT/makefile_macosx_ppc/clean.command ${DIR}/actual_templates/project/makefile_macosx_ppc/clean.command &&
cp ${DIR}/PROJECT/makefile_macosx_ppc/clean64.command ${DIR}/actual_templates/project/makefile_macosx_ppc/clean64.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx_ppc/makefile > ${DIR}/actual_templates/project/makefile_macosx_ppc/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx_ppc/makefile64 > ${DIR}/actual_templates/project/makefile_macosx_ppc/makefile64 &&
#--- Makefile makefile_macosx_i386
rm -f ${DIR}/actual_templates/project/makefile_macosx_i386/* &&
cp ${DIR}/PROJECT/makefile_macosx_i386/build.command ${DIR}/actual_templates/project/makefile_macosx_i386/build.command &&
cp ${DIR}/PROJECT/makefile_macosx_i386/build64.command ${DIR}/actual_templates/project/makefile_macosx_i386/build64.command &&
cp ${DIR}/PROJECT/makefile_macosx_i386/clean.command ${DIR}/actual_templates/project/makefile_macosx_i386/clean.command &&
cp ${DIR}/PROJECT/makefile_macosx_i386/clean64.command ${DIR}/actual_templates/project/makefile_macosx_i386/clean64.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx_i386/makefile > ${DIR}/actual_templates/project/makefile_macosx_i386/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx_i386/makefile64 > ${DIR}/actual_templates/project/makefile_macosx_i386/makefile64 &&
#--- Makefile makefile_macosx_universal
rm -f ${DIR}/actual_templates/project/makefile_macosx_universal/* &&
cp ${DIR}/PROJECT/makefile_macosx_universal/build.command ${DIR}/actual_templates/project/makefile_macosx_universal/build.command &&
cp ${DIR}/PROJECT/makefile_macosx_universal/build64.command ${DIR}/actual_templates/project/makefile_macosx_universal/build64.command &&
cp ${DIR}/PROJECT/makefile_macosx_universal/clean.command ${DIR}/actual_templates/project/makefile_macosx_universal/clean.command &&
cp ${DIR}/PROJECT/makefile_macosx_universal/clean64.command ${DIR}/actual_templates/project/makefile_macosx_universal/clean64.command &&
sed "s/%/!%/g" ${DIR}/PROJECT/makefile_macosx_universal/makefile | sed "s/PROJECT/%PROJECT_NAME%/g" > ${DIR}/actual_templates/project/makefile_macosx_universal/makefile &&
sed "s/%/!%/g" ${DIR}/PROJECT/makefile_macosx_universal/makefile64 | sed "s/PROJECT/%PROJECT_NAME%/g" > ${DIR}/actual_templates/project/makefile_macosx_universal/makefile64 &&
#--- Makefile makefile_mingw_on_macosx
rm -f ${DIR}/actual_templates/project/makefile_mingw_on_macosx/* &&
cp ${DIR}/PROJECT/makefile_mingw_on_macosx/build.command ${DIR}/actual_templates/project/makefile_mingw_on_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_mingw_on_macosx/clean.command ${DIR}/actual_templates/project/makefile_mingw_on_macosx/clean.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_mingw_on_macosx/makefile > ${DIR}/actual_templates/project/makefile_mingw_on_macosx/makefile &&
#--- Makefile makefile_msys_on_win32
rm -f ${DIR}/actual_templates/project/makefile_msys_on_win32/* &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/build.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/build.bat &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/clean.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/clean.bat &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/install.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/install.bat &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_msys_on_win32/makefile.mke > ${DIR}/actual_templates/project/makefile_msys_on_win32/makefile.mke &&
#--- Makefile makefile_unix
rm -f ${DIR}/actual_templates/project/makefile_unix/* &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_unix/makefile > ${DIR}/actual_templates/project/makefile_unix/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_unix/makefile64 > ${DIR}/actual_templates/project/makefile_unix/makefile64 &&
#--- Makefile makefile_x86linux_on_macosx
rm -f ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/* &&
cp ${DIR}/PROJECT/makefile_x86linux_on_macosx/build.command ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_x86linux_on_macosx/clean.command ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/clean.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_x86linux_on_macosx/makefile > ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/makefile &&
#------------------------------------------------------------------------- MDA Project
rm -f ${DIR}/actual_templates/mda-project/project_xcode/* &&
sed "s/MDA_PROJECT/%PROJECT_NAME%/g" ${DIR}/MDA_PROJECT/project_xcode/MDA_PROJECT.xcodeproj/project.pbxproj > ${DIR}/actual_templates/mda-project/project_xcode/project.pbxproj &&
echo "---------------- SUCCES --------------------------"
