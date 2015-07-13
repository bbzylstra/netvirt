/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_AuthRequest_H_
#define	_AuthRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AuthRequest */
typedef struct AuthRequest {
	IA5String_t	 certName;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuthRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _AuthRequest_H_ */
#include <asn_internal.h>
