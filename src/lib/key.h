/* SPDX-License-Identifier: BSD-2 */
/*
 * Copyright (c) 2018, Intel Corporation
 * All rights reserved.
 */
#ifndef SRC_PKCS11_KEY_H_
#define SRC_PKCS11_KEY_H_

#include "pkcs11.h"

typedef struct token token;
typedef struct session_ctx session_ctx;

CK_RV key_gen (token *tok,
        CK_MECHANISM *mechanism, CK_ATTRIBUTE *public_key_template, unsigned long public_key_attribute_count, CK_ATTRIBUTE *private_key_template, unsigned long private_key_attribute_count, CK_OBJECT_HANDLE *public_key, CK_OBJECT_HANDLE *private_key);

#endif /* SRC_PKCS11_KEY_H_ */
