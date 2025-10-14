#ifndef _com_sun_security_sasl_ntlm_NTLMServer$1_h_
#define _com_sun_security_sasl_ntlm_NTLMServer$1_h_
//$ class com.sun.security.sasl.ntlm.NTLMServer$1
//$ extends com.sun.security.ntlm.Server

#include <com/sun/security/ntlm/Server.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {
					class NTLMServer;
				}
			}
		}
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
				namespace ntlm {

class NTLMServer$1 : public ::com::sun::security::ntlm::Server {
	$class(NTLMServer$1, $NO_CLASS_INIT, ::com::sun::security::ntlm::Server)
public:
	NTLMServer$1();
	void init$(::com::sun::security::sasl::ntlm::NTLMServer* this$0, $String* arg0, $String* arg1, ::javax::security::auth::callback::CallbackHandler* val$cbh);
	virtual $chars* getPassword($String* ntdomain, $String* username) override;
	::com::sun::security::sasl::ntlm::NTLMServer* this$0 = nullptr;
	::javax::security::auth::callback::CallbackHandler* val$cbh = nullptr;
};

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_ntlm_NTLMServer$1_h_