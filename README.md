# TheWitchdoctors
 MacOS / iOS Security and SEP related private headers and reversing information

- Wed Nov 2:
Description:
Added SecKeyPriv2.h iOS 15.x SecKey private header extensions created by failbr34k with the help of iamthekid's ios 15 JB.

WriteUp: 
DRM / Activtion has been updated again by apple to reflect a similar DRM and key creation to MacOS.
SecKeyCopyAttestationKey has been deprecated and replaced with SecKeyCopySystemKey.


New key types that have been noted are:

    kSecKeyAttestationKeyTypeDAKCommited
    kSecKeyAttestationKeyTypeDAKProposed
    kSecKeyAttestationKeyTypeHAVEnc
