#ifndef _com_sun_security_sasl_PlainClient_h_
#define _com_sun_security_sasl_PlainClient_h_
//$ class com.sun.security.sasl.PlainClient
//$ extends javax.security.sasl.SaslClient

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClient.h>

#pragma push_macro("SEP")
#undef SEP

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class PlainClient : public ::javax::security::sasl::SaslClient {
	$class(PlainClient, $HAS_FINALIZE, ::javax::security::sasl::SaslClient)
public:
	PlainClient();
	void init$($String* authorizationID, $String* authenticationID, $bytes* pw);
	void clearPassword();
	virtual void dispose() override;
	virtual $bytes* evaluateChallenge($bytes* challengeData) override;
	virtual void finalize() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual bool hasInitialResponse() override;
	virtual bool isComplete() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	bool completed = false;
	$bytes* pw = nullptr;
	$String* authorizationID = nullptr;
	$String* authenticationID = nullptr;
	static int8_t SEP;
};

			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("SEP")

#endif // _com_sun_security_sasl_PlainClient_h_