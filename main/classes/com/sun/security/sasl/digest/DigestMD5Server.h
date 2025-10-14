#ifndef _com_sun_security_sasl_digest_DigestMD5Server_h_
#define _com_sun_security_sasl_digest_DigestMD5Server_h_
//$ class com.sun.security.sasl.digest.DigestMD5Server
//$ extends com.sun.security.sasl.digest.DigestMD5Base
//$ implements javax.security.sasl.SaslServer

#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <java/lang/Array.h>
#include <javax/security/sasl/SaslServer.h>

#pragma push_macro("ALGORITHM_DIRECTIVE")
#undef ALGORITHM_DIRECTIVE
#pragma push_macro("AUTHZID")
#undef AUTHZID
#pragma push_macro("AUTH_PARAM")
#undef AUTH_PARAM
#pragma push_macro("CHARSET")
#undef CHARSET
#pragma push_macro("CIPHER")
#undef CIPHER
#pragma push_macro("CNONCE")
#undef CNONCE
#pragma push_macro("DIGEST_URI")
#undef DIGEST_URI
#pragma push_macro("DIRECTIVE_KEY")
#undef DIRECTIVE_KEY
#pragma push_macro("MAXBUF")
#undef MAXBUF
#pragma push_macro("MY_CLASS_NAME")
#undef MY_CLASS_NAME
#pragma push_macro("NONCE")
#undef NONCE
#pragma push_macro("NONCE_COUNT")
#undef NONCE_COUNT
#pragma push_macro("NONCE_COUNT_VALUE")
#undef NONCE_COUNT_VALUE
#pragma push_macro("QOP")
#undef QOP
#pragma push_macro("REALM")
#undef REALM
#pragma push_macro("REALM_PROPERTY")
#undef REALM_PROPERTY
#pragma push_macro("RESPONSE")
#undef RESPONSE
#pragma push_macro("USERNAME")
#undef USERNAME
#pragma push_macro("UTF8_DIRECTIVE")
#undef UTF8_DIRECTIVE
#pragma push_macro("UTF8_PROPERTY")
#undef UTF8_PROPERTY

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

class DigestMD5Server : public ::com::sun::security::sasl::digest::DigestMD5Base, public ::javax::security::sasl::SaslServer {
	$class(DigestMD5Server, 0, ::com::sun::security::sasl::digest::DigestMD5Base, ::javax::security::sasl::SaslServer)
public:
	DigestMD5Server();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual int32_t hashCode() override;
	virtual bool isComplete() override;
	void init$($String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	virtual $bytes* evaluateResponse($bytes* response) override;
	$bytes* generateChallenge(::java::util::List* realms, $String* qopStr, $String* cipherStr);
	$bytes* generateResponseAuth($String* username, $chars* passwd, $bytes* cnonce, int32_t nonceCount, $bytes* authzidBytes);
	virtual $String* getAuthorizationID() override;
	virtual $String* toString() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t start, int32_t len) override;
	static bool uriMatches($String* thisUri, $String* incomingUri);
	$bytes* validateClientResponse($Array<int8_t, 2>* responseVal);
	virtual $bytes* wrap($bytes* outgoing, int32_t start, int32_t len) override;
	static $String* MY_CLASS_NAME;
	static $String* UTF8_DIRECTIVE;
	static $String* ALGORITHM_DIRECTIVE;
	static const int32_t NONCE_COUNT_VALUE = 1;
	static $String* UTF8_PROPERTY;
	static $String* REALM_PROPERTY;
	static $StringArray* DIRECTIVE_KEY;
	static const int32_t USERNAME = 0;
	static const int32_t REALM = 1;
	static const int32_t NONCE = 2;
	static const int32_t CNONCE = 3;
	static const int32_t NONCE_COUNT = 4;
	static const int32_t QOP = 5;
	static const int32_t DIGEST_URI = 6;
	static const int32_t RESPONSE = 7;
	static const int32_t MAXBUF = 8;
	static const int32_t CHARSET = 9;
	static const int32_t CIPHER = 10;
	static const int32_t AUTHZID = 11;
	static const int32_t AUTH_PARAM = 12;
	$String* specifiedQops = nullptr;
	$bytes* myCiphers = nullptr;
	::java::util::List* serverRealms = nullptr;
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("ALGORITHM_DIRECTIVE")
#pragma pop_macro("AUTHZID")
#pragma pop_macro("AUTH_PARAM")
#pragma pop_macro("CHARSET")
#pragma pop_macro("CIPHER")
#pragma pop_macro("CNONCE")
#pragma pop_macro("DIGEST_URI")
#pragma pop_macro("DIRECTIVE_KEY")
#pragma pop_macro("MAXBUF")
#pragma pop_macro("MY_CLASS_NAME")
#pragma pop_macro("NONCE")
#pragma pop_macro("NONCE_COUNT")
#pragma pop_macro("NONCE_COUNT_VALUE")
#pragma pop_macro("QOP")
#pragma pop_macro("REALM")
#pragma pop_macro("REALM_PROPERTY")
#pragma pop_macro("RESPONSE")
#pragma pop_macro("USERNAME")
#pragma pop_macro("UTF8_DIRECTIVE")
#pragma pop_macro("UTF8_PROPERTY")

#endif // _com_sun_security_sasl_digest_DigestMD5Server_h_