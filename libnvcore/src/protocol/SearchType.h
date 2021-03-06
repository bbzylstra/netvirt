/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_SearchType_H_
#define	_SearchType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SearchType {
	SearchType_all	= 1,
	SearchType_sequence	= 2,
	SearchType_object	= 3
	/*
	 * Enumeration is extensible
	 */
} e_SearchType;

/* SearchType */
typedef long	 SearchType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SearchType;
asn_struct_free_f SearchType_free;
asn_struct_print_f SearchType_print;
asn_constr_check_f SearchType_constraint;
ber_type_decoder_f SearchType_decode_ber;
der_type_encoder_f SearchType_encode_der;
xer_type_decoder_f SearchType_decode_xer;
xer_type_encoder_f SearchType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SearchType_H_ */
#include <asn_internal.h>
