# file: {Excelsior}./src/version.pri

VER_MAJOR = 2
VER_MINOR = 2
VER_RELEASE = 1
VER_BRANCH = 0
VER_STRING = "v2.02A"
VER_TRUNKNAME = "develop"
VER_BRANCHNAME = ""
VER_QT = $${QT_VERSION}

windows:VERSION = 2.2.1.0
!windows:VERSION = 2.2.0
VER_MAJ = $${VER_MAJOR}
VER_MIN = $${VER_MINOR}
VER_PAT = $${VER_BRANCH}

#message("Version = $${VER_STRING}+$${EIRC_VER_BRANCHNAME} $${VER_TRUNKNAME}")
#message("QMAKESPEC = $${QMAKESPEC}")
