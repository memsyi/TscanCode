#define TSC_SVN 2397
#define TSC_MAJOR 2
#define TSC_MINOR 14
#define TSC_DEVMINOR 1

#define STRINGIFY(x) STRING(x)
#define STRING(VER) #VER

#define TSCANCODE_VERSION_STRING STRINGIFY(TSC_MAJOR) "." STRINGIFY(TSC_MINOR) "." STRINGIFY(TSC_SVN)
#define TSCANCODE_VERSION TSC_MAJOR,TSC_MINOR,0,0

#define LEGALCOPYRIGHT L"Copyright (C) 2017-2018 TSC team"
