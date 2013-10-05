/*
 * Dynamic Network Directory Service
 * Copyright (C) 2009-2013
 * Nicolas J. Bouliane <nib@dynvpn.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 *
 */

#ifndef DNC_H
#define DNC_H

#ifdef _WIN32
	#define DNC_IP_FILE	"dnc.ip"
#elif __APPLE__
	#define DNC_IP_FILE	"dnc.ip"
#else
	#define DNC_IP_FILE	"/etc/dnds/dnc.ip"
#endif

struct dnc_cfg {
	const char *server_address;
	const char *server_port;
	const char *certificate;
	const char *privatekey;
	const char *trusted_cert;
	char *prov_code;
	const char *log_file;

	struct {
		void (*on_connect)(void *obj, const char *ip);
		void *obj;
	} ev;
};

#ifdef __cplusplus
extern "C" {
#endif

int dnc_init(struct dnc_cfg *dnc_cfg);

#ifdef __cplusplus
}
#endif

#endif
