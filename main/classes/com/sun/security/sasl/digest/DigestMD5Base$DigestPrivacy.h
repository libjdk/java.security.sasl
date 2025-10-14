#ifndef _com_sun_security_sasl_digest_DigestMD5Base$DigestPrivacy_h_
#define _com_sun_security_sasl_digest_DigestMD5Base$DigestPrivacy_h_
//$ class com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy
//$ extends com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity

#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>
#include <java/lang/Array.h>

#pragma push_macro("CLIENT_CONF_MAGIC")
#undef CLIENT_CONF_MAGIC
#pragma push_macro("SVR_CONF_MAGIC")
#undef SVR_CONF_MAGIC

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
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

class DigestMD5Base$DigestPrivacy : public ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity {
	$class(DigestMD5Base$DigestPrivacy, 0, ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity)
public:
	DigestMD5Base$DigestPrivacy();
	void init$(::com::sun::security::sasl::digest::DigestMD5Base* this$0, bool clientMode);
	void generatePrivacyKeyPair(bool clientMode);
	virtual $bytes* unwrap($bytes* incoming, int32_t start, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t start, int32_t len) override;
	::com::sun::security::sasl::digest::DigestMD5Base* this$0 = nullptr;
	static $String* CLIENT_CONF_MAGIC;
	static $String* SVR_CONF_MAGIC;
	::javax::crypto::Cipher* encCipher = nullptr;
	::javax::crypto::Cipher* decCipher = nullptr;
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("CLIENT_CONF_MAGIC")
#pragma pop_macro("SVR_CONF_MAGIC")

#endif // _com_sun_security_sasl_digest_DigestMD5Base$DigestPrivacy_h_