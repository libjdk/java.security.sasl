#include <com/sun/security/sasl/Provider$1.h>

#include <com/sun/security/sasl/Provider$ProviderService.h>
#include <com/sun/security/sasl/Provider.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $Provider = ::com::sun::security::sasl::Provider;
using $Provider$ProviderService = ::com::sun::security::sasl::Provider$ProviderService;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $1Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _Provider$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/security/sasl/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(Provider$1, this$0)},
	{"val$p", "Lcom/sun/security/sasl/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(Provider$1, val$p)},
	{}
};

$MethodInfo _Provider$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/security/sasl/Provider;Lcom/sun/security/sasl/Provider;)V", "()V", 0, $method(static_cast<void(Provider$1::*)($Provider*,$Provider*)>(&Provider$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Provider$1_EnclosingMethodInfo_ = {
	"com.sun.security.sasl.Provider",
	"<init>",
	"()V"
};

$InnerClassInfo _Provider$1_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.Provider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Provider$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.security.sasl.Provider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Provider$1_FieldInfo_,
	_Provider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Provider$1_EnclosingMethodInfo_,
	_Provider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.sasl.Provider"
};

$Object* allocate$Provider$1($Class* clazz) {
	return $of($alloc(Provider$1));
}

void Provider$1::init$($Provider* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* Provider$1::run() {
	$useLocalCurrentObjectStackCache();
	$Provider::access$000(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "DIGEST-MD5"_s, "com.sun.security.sasl.digest.FactoryImpl"_s));
	$Provider::access$100(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "NTLM"_s, "com.sun.security.sasl.ntlm.FactoryImpl"_s));
	$Provider::access$200(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "EXTERNAL"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$300(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "PLAIN"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$400(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "CRAM-MD5"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$500(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "CRAM-MD5"_s, "com.sun.security.sasl.ServerFactoryImpl"_s));
	$Provider::access$600(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "DIGEST-MD5"_s, "com.sun.security.sasl.digest.FactoryImpl"_s));
	$Provider::access$700(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "NTLM"_s, "com.sun.security.sasl.ntlm.FactoryImpl"_s));
	return $of(nullptr);
}

Provider$1::Provider$1() {
}

$Class* Provider$1::load$($String* name, bool initialize) {
	$loadClass(Provider$1, name, initialize, &_Provider$1_ClassInfo_, allocate$Provider$1);
	return class$;
}

$Class* Provider$1::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com