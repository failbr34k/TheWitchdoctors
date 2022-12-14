//
//  SecKeyPriv2.h
//  MacOS / iOS 15.x Security Framework extension for private functions.
//
//  The Witchdoctors - Created by failbr34k on 2022-11-02.
//

#include <Security/SecBase.h>
#include <Security/SecKey.h>
#include "SecAsn1Types.h"
#include "CFRuntime.h"

#if SEC_OS_IOS
#include <CoreFoundation/CoreFoundation.h>
#include <CoreFoundation/CFDictionary.h>
#endif

#if SEC_OS_OSX
#include <Security/SecKey.h>
#include <Security/x509defs.h>
#include <AvailabilityMacros.h>
#endif


/*!
 @enum SecKeySystemKeyType
 @abstract Defines types of builtin attestation keys.
*/
typedef CF_ENUM(uint32_t, SecKeySystemKeyType)
{
    kSecKeySystemKeyTypeSIK = 0x0,
    kSecKeySystemKeyTypeGID = 0x1,
    kSecKeySystemKeyTypeUIKCommitted = 0x2,
    kSecKeySystemKeyTypeUIKProposed  = 0x3,
    kSecKeySystemKeyTypeSecureElement = 0x4,
    kSecKeySystemKeyTypeDAKCommited = 0x7,
    kSecKeySystemKeyTypeDAKProposed = 0x8,
    kSecKeySystemKeyTypeHAVEnc = 0x9
};

/*!
@function SecKeyCopySystemKey
@abstract Returns a copy of a builtin attestation key.

@param keyType Type of the requested builtin key.
@param error An optional pointer to a CFErrorRef. This value is set if an error occurred.

@result On success a SecKeyRef containing the requested key is returned, on failure it returns NULL.
*/
SecKeyRef SecKeyCopySystemKey(SecKeySystemKeyType keyType, CFErrorRef *error)
__OSX_AVAILABLE(12.0) __IOS_AVAILABLE(15.0) __TVOS_AVAILABLE(15.0);
