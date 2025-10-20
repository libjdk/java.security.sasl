#include <com/sun/security/sasl/ntlm/NTLMServer$1.h>

#include <com/sun/security/ntlm/Server.h>
#include <com/sun/security/sasl/ntlm/NTLMServer.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/TextInputCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/RealmCallback.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $Server = ::com::sun::security::ntlm::Server;
using $NTLMServer = ::com::sun::security::sasl::ntlm::NTLMServer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $RealmCallback = ::javax::security::sasl::RealmCallback;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {

$FieldInfo _NTLMServer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/security/sasl/ntlm/NTLMServer;", nullptr, $FINAL | $SYNTHETIC, $field(NTLMServer$1, this$0)},
	{"val$cbh", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $FINAL | $SYNTHETIC, $field(NTLMServer$1, val$cbh)},
	{}
};

$MethodInfo _NTLMServer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/security/sasl/ntlm/NTLMServer;Ljava/lang/String;Ljava/lang/String;Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, 0, $method(static_cast<void(NTLMServer$1::*)($NTLMServer*,$String*,$String*,$CallbackHandler*)>(&NTLMServer$1::init$)), "com.sun.security.ntlm.NTLMException"},
	{"getPassword", "(Ljava/lang/String;Ljava/lang/String;)[C", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NTLMServer$1_EnclosingMethodInfo_ = {
	"com.sun.security.sasl.ntlm.NTLMServer",
	"<init>",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V"
};

$InnerClassInfo _NTLMServer$1_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.ntlm.NTLMServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NTLMServer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.security.sasl.ntlm.NTLMServer$1",
	"com.sun.security.ntlm.Server",
	nullptr,
	_NTLMServer$1_FieldInfo_,
	_NTLMServer$1_MethodInfo_,
	nullptr,
	&_NTLMServer$1_EnclosingMethodInfo_,
	_NTLMServer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.sasl.ntlm.NTLMServer"
};

$Object* allocate$NTLMServer$1($Class* clazz) {
	return $of($alloc(NTLMServer$1));
}

void NTLMServer$1::init$($NTLMServer* this$0, $String* arg0, $String* arg1, $CallbackHandler* val$cbh) {
	$set(this, this$0, this$0);
	$set(this, val$cbh, val$cbh);
	$Server::init$(arg0, arg1);
}

$chars* NTLMServer$1::getPassword($String* ntdomain, $String* username) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($RealmCallback, rcb, (ntdomain == nullptr || $nc(ntdomain)->isEmpty()) ? $new($RealmCallback, "Domain: "_s) : $new($RealmCallback, "Domain: "_s, ntdomain));
		$var($NameCallback, ncb, $new($NameCallback, "Name: "_s, username));
		$var($PasswordCallback, pcb, $new($PasswordCallback, "Password: "_s, false));
		$nc(this->val$cbh)->handle($$new($CallbackArray, {
			static_cast<$Callback*>(rcb),
			static_cast<$Callback*>(ncb),
			static_cast<$Callback*>(pcb)
		}));
		$var($chars, passwd, pcb->getPassword());
		pcb->clearPassword();
		return passwd;
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return nullptr;
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, uce, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

NTLMServer$1::NTLMServer$1() {
}

$Class* NTLMServer$1::load$($String* name, bool initialize) {
	$loadClass(NTLMServer$1, name, initialize, &_NTLMServer$1_ClassInfo_, allocate$NTLMServer$1);
	return class$;
}

$Class* NTLMServer$1::class$ = nullptr;

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com