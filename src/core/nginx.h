
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      1017009
#define NGINX_VERSION      "1.17.9"
#define NGINX_VER          "nginx/" NGINX_VERSION " by Hakase"

#ifndef NGINX_SERVER
#define NGINX_SERVER       "hakase"
#endif

#define NGINX_SERVER_FULL  NGINX_SERVER "/" NGINX_VERSION
#define NGINX_ORIG         "nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_SERVER_FULL_BUILD  NGINX_SERVER_FULL " (" NGX_BUILD ")"
#define NGINX_VER_BUILD          NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_SERVER_FULL_BUILD  NGINX_SERVER_FULL
#define NGINX_VER_BUILD          NGINX_VER
#endif

#define NGINX_VAR          "NGINX"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
