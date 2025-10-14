#ifndef _com_sun_security_sasl_digest_DigestMD5Client_h_
#define _com_sun_security_sasl_digest_DigestMD5Client_h_
//$ class com.sun.security.sasl.digest.DigestMD5Client
//$ extends com.sun.security.sasl.digest.DigestMD5Base
//$ implements javax.security.sasl.SaslClient

#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClient.h>

#pragma push_macro("ALGORITHM")
#undef ALGORITHM
#pragma push_macro("CHARSET")
#undef CHARSET
#pragma push_macro("CIPHER")
#undef CIPHER
#pragma push_macro("CIPHER_PROPERTY")
#undef CIPHER_PROPERTY
#pragma push_macro("DIRECTIVE_KEY")
#undef DIRECTIVE_KEY
#pragma push_macro("MAXBUF")
#undef MAXBUF
#pragma push_macro("MY_CLASS_NAME")
#undef MY_CLASS_NAME
#pragma push_macro("NONCE")
#undef NONCE
#pragma push_macro("QOP")
#undef QOP
#pragma push_macro("REALM")
#undef REALM
#pragma push_macro("RESPONSE_AUTH")
#undef RESPONSE_AUTH
#pragma push_macro("STALE")
#undef STALE

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

class DigestMD5Client : public ::com::sun::security::sasl::digest::DigestMD5Base, public ::javax::security::sasl::SaslClient {
	$class(DigestMD5Client, 0, ::com::sun::security::sasl::digest::DigestMD5Base, ::javax::security::sasl::SaslClient)
public:
	DigestMD5Client();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual int32_t hashCode() override;
	virtual bool isComplete() override;
	void init$($String* authzid, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	void checkQopSupport($bytes* qopInChallenge, $bytes* ciphersInChallenge);
	void checkStrengthSupport($bytes* ciphersInChallenge);
	void clearPassword();
	virtual $bytes* evaluateChallenge($bytes* challengeData) override;
	$String* findCipherAndStrength($bytes* supportedCiphers, $StringArray* tokens);
	$bytes* generateClientResponse($bytes* charset);
	static int32_t getNonceCount($bytes* nonceValue);
	virtual bool hasInitialResponse() override;
	void processChallenge($Array<int8_t, 2>* challengeVal, ::java::util::List* realmChoices);
	virtual $String* toString() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t start, int32_t len) override;
	void validateResponseValue($bytes* fromServer);
	virtual $bytes* wrap($bytes* outgoing, int32_t start, int32_t len) override;
	static $String* MY_CLASS_NAME;
	static $String* CIPHER_PROPERTY;
	static $StringArray* DIRECTIVE_KEY;
	static const int32_t REALM = 0;
	static const int32_t QOP = 1;
	static const int32_t ALGORITHM = 2;
	static const int32_t NONCE = 3;
	static const int32_t MAXBUF = 4;
	static const int32_t CHARSET = 5;
	static const int32_t CIPHER = 6;
	static const int32_t RESPONSE_AUTH = 7;
	static const int32_t STALE = 8;
	int32_t nonceCount = 0;
	$String* specifiedCipher = nullptr;
	$bytes* cnonce = nullptr;
	$String* username = nullptr;
	$chars* passwd = nullptr;
	$bytes* authzidBytes = nullptr;
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("ALGORITHM")
#pragma pop_macro("CHARSET")
#pragma pop_macro("CIPHER")
#pragma pop_macro("CIPHER_PROPERTY")
#pragma pop_macro("DIRECTIVE_KEY")
#pragma pop_macro("MAXBUF")
#pragma pop_macro("MY_CLASS_NAME")
#pragma pop_macro("NONCE")
#pragma pop_macro("QOP")
#pragma pop_macro("REALM")
#pragma pop_macro("RESPONSE_AUTH")
#pragma pop_macro("STALE")

#endif // _com_sun_security_sasl_digest_DigestMD5Client_h_