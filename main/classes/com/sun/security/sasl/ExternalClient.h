#ifndef _com_sun_security_sasl_ExternalClient_h_
#define _com_sun_security_sasl_ExternalClient_h_
//$ class com.sun.security.sasl.ExternalClient
//$ extends javax.security.sasl.SaslClient

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClient.h>

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class ExternalClient : public ::javax::security::sasl::SaslClient {
	$class(ExternalClient, $NO_CLASS_INIT, ::javax::security::sasl::SaslClient)
public:
	ExternalClient();
	void init$($String* authorizationID);
	virtual void dispose() override;
	virtual $bytes* evaluateChallenge($bytes* challengeData) override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual bool hasInitialResponse() override;
	virtual bool isComplete() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	$bytes* username = nullptr;
	bool completed = false;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_ExternalClient_h_