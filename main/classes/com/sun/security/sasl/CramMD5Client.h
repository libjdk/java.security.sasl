#ifndef _com_sun_security_sasl_CramMD5Client_h_
#define _com_sun_security_sasl_CramMD5Client_h_
//$ class com.sun.security.sasl.CramMD5Client
//$ extends com.sun.security.sasl.CramMD5Base
//$ implements javax.security.sasl.SaslClient

#include <com/sun/security/sasl/CramMD5Base.h>
#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClient.h>

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class CramMD5Client : public ::com::sun::security::sasl::CramMD5Base, public ::javax::security::sasl::SaslClient {
	$class(CramMD5Client, $NO_CLASS_INIT, ::com::sun::security::sasl::CramMD5Base, ::javax::security::sasl::SaslClient)
public:
	CramMD5Client();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual int32_t hashCode() override;
	void init$($String* authID, $bytes* pw);
	virtual $bytes* evaluateChallenge($bytes* challengeData) override;
	virtual bool hasInitialResponse() override;
	virtual bool isComplete() override;
	virtual $String* toString() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	$String* username = nullptr;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_CramMD5Client_h_