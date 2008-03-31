#!/bin/sh

DIR=`dirname $0` &&
#----- Project
mkdir -p ${DIR}/actual_templates/project/project_xcode &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/PROJECT.xcodeproj/project.pbxproj > ${DIR}/actual_templates/project/project_xcode/project.pbxproj &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/Info.plist > ${DIR}/actual_templates/project/project_xcode/Info.plist &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/project_xcode/main.m > ${DIR}/actual_templates/project/project_xcode/main.m &&
mkdir -p ${DIR}/actual_templates/project/project_xcode/English.lproj &&
cp ${DIR}/PROJECT/project_xcode/English.lproj/Credits.rtf ${DIR}/actual_templates/project/project_xcode/English.lproj/Credits.rtf &&
cp ${DIR}/PROJECT/project_xcode/English.lproj/InfoPlist.strings ${DIR}/actual_templates/project/project_xcode/English.lproj/InfoPlist.strings &&
mkdir -p ${DIR}/actual_templates/project/common_files_for_make &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/common_files_for_make/makefile.mke > ${DIR}/actual_templates/project/common_files_for_make/makefile.mke &&
mkdir -p ${DIR}/actual_templates/project/galgas_sources &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/build.bat > ${DIR}/actual_templates/project/galgas_sources/build.bat.txt &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/_all_PROJECT.ggs > ${DIR}/actual_templates/project/galgas_sources/_all_PROJECT.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_cocoa.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_cocoa.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_grammar.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_grammar.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_lexique.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_lexique.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_options.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_options.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_program.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_program.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_semantics.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_semantics.ggs &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/galgas_sources/PROJECT_syntax.ggs > ${DIR}/actual_templates/project/galgas_sources/PROJECT_syntax.ggs &&
mkdir -p ${DIR}/actual_templates/project/hand_coded_sources &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/hand_coded_sources/PROJECT_computations.cpp > ${DIR}/actual_templates/project/hand_coded_sources/PROJECT_computations.cpp &&
mkdir -p ${DIR}/actual_templates/project/makefile_macosx &&
cp ${DIR}/PROJECT/makefile_macosx/build.command ${DIR}/actual_templates/project/makefile_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_macosx/build64.command ${DIR}/actual_templates/project/makefile_macosx/build64.command &&
cp ${DIR}/PROJECT/makefile_macosx/clean.command ${DIR}/actual_templates/project/makefile_macosx/clean.command &&
cp ${DIR}/PROJECT/makefile_macosx/clean64.command ${DIR}/actual_templates/project/makefile_macosx/clean64.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx/makefile > ${DIR}/actual_templates/project/makefile_macosx/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_macosx/makefile64 > ${DIR}/actual_templates/project/makefile_macosx/makefile64 &&
mkdir -p ${DIR}/actual_templates/project/makefile_mingw_on_macosx &&
cp ${DIR}/PROJECT/makefile_mingw_on_macosx/build.command ${DIR}/actual_templates/project/makefile_mingw_on_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_mingw_on_macosx/clean.command ${DIR}/actual_templates/project/makefile_mingw_on_macosx/clean.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_mingw_on_macosx/makefile > ${DIR}/actual_templates/project/makefile_mingw_on_macosx/makefile &&
mkdir -p ${DIR}/actual_templates/project/makefile_msys_on_win32 &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/build.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/build.bat &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/clean.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/clean.bat &&
cp ${DIR}/PROJECT/makefile_msys_on_win32/install.bat ${DIR}/actual_templates/project/makefile_msys_on_win32/install.bat &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_msys_on_win32/makefile.mke > ${DIR}/actual_templates/project/makefile_msys_on_win32/makefile.mke &&
mkdir -p ${DIR}/actual_templates/project/makefile_unix &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_unix/makefile > ${DIR}/actual_templates/project/makefile_unix/makefile &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_unix/makefile64 > ${DIR}/actual_templates/project/makefile_unix/makefile64 &&
mkdir -p ${DIR}/actual_templates/project/makefile_x86linux_on_macosx &&
cp ${DIR}/PROJECT/makefile_x86linux_on_macosx/build.command ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/build.command &&
cp ${DIR}/PROJECT/makefile_x86linux_on_macosx/clean.command ${DIR}/actual_templates/project/makefile_x86linux_on_macosx/clean.command &&
sed "s/PROJECT/%PROJECT_NAME%/g" ${DIR}/PROJECT/makefile_x86linux_on_macosx/makefile > ${DIR}/actual_templates/project/makefile_msys_on_win32/makefile &&
#----- MDA Project
mkdir -p ${DIR}/actual_templates/mda-project/project_xcode &&
sed "s/MDA_PROJECT/%PROJECT_NAME%/g" ${DIR}/MDA_PROJECT/project_xcode/MDA_PROJECT.xcodeproj/project.pbxproj > ${DIR}/actual_templates/mda-project/project_xcode/project.pbxproj &&
mkdir -p ${DIR}/actual_templates/mda-project/common_files_for_make &&
sed "s/MDA_PROJECT/%PROJECT_NAME%/g" ${DIR}/MDA_PROJECT/common_files_for_make/makefile.mke > ${DIR}/actual_templates/mda-project/common_files_for_make/makefile.mke &&
echo "---------------- SUCCES --------------------------"
