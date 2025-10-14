#ifndef _com_sun_security_sasl_digest_DigestMD5Base$DigestIntegrity_h_
#define _com_sun_security_sasl_digest_DigestMD5Base$DigestIntegrity_h_
//$ class com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity
//$ extends com.sun.security.sasl.digest.SecurityCtx

#include <com/sun/security/sasl/digest/SecurityCtx.h>
#include <java/lang/Array.h>

#pragma push_macro("CLIENT_INT_MAGIC")
#undef CLIENT_INT_MAGIC
#pragma push_macro("SVR_INT_MAGIC")
#undef SVR_INT_MAGIC

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {
					class DigestMD5Base;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

class DigestMD5Base$DigestIntegrity : public ::com::sun::security::sasl::digest::SecurityCtx {
	$class(DigestMD5Base$DigestIntegrity, 0, ::com::sun::security::sasl::digest::SecurityCtx)
public:
	DigestMD5Base$DigestIntegrity();
	void init$(::com::sun::security::sasl::digest::DigestMD5Base* this$0, bool clientMode);
	void generateIntegrityKeyPair(bool clientMode);
	virtual $bytes* getHMAC($bytes* Ki, $bytes* seqnum, $bytes* msg, int32_t start, int32_t len);
	virtual void incrementSeqNum();
	virtual $bytes* unwrap($bytes* incoming, int32_t start, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t start, int32_t len) override;
	::com::sun::security::sasl::digest::DigestMD5Base* this$0 = nullptr;
	static $String* CLIENT_INT_MAGIC;
	static $String* SVR_INT_MAGIC;
	$bytes* myKi = nullptr;
	$bytes* peerKi = nullptr;
	int32_t mySeqNum = 0;
	int32_t peerSeqNum = 0;
	$bytes* messageType = nullptr;
	$bytes* sequenceNum = nullptr;
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("CLIENT_INT_MAGIC")
#pragma pop_macro("SVR_INT_MAGIC")

#endif // _com_sun_security_sasl_digest_DigestMD5Base$DigestIntegrity_h_