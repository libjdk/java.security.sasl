#include <javax/security/sasl/Sasl$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClientFactory = ::javax::security::sasl::SaslClientFactory;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _Sasl$1_FieldInfo_[] = {
	{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sasl$1, val$iter)},
	{}
};

$MethodInfo _Sasl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Sasl$1::*)($Iterator*)>(&Sasl$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/security/sasl/SaslClientFactory;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Sasl$1_EnclosingMethodInfo_ = {
	"javax.security.sasl.Sasl",
	"getSaslClientFactories",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _Sasl$1_InnerClassesInfo_[] = {
	{"javax.security.sasl.Sasl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sasl$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.sasl.Sasl$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_Sasl$1_FieldInfo_,
	_Sasl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/security/sasl/SaslClientFactory;>;",
	&_Sasl$1_EnclosingMethodInfo_,
	_Sasl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.sasl.Sasl"
};

$Object* allocate$Sasl$1($Class* clazz) {
	return $of($alloc(Sasl$1));
}

void Sasl$1::init$($Iterator* val$iter) {
	$set(this, val$iter, val$iter);
}

bool Sasl$1::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* Sasl$1::nextElement() {
	return $of($cast($SaslClientFactory, $nc(this->val$iter)->next()));
}

Sasl$1::Sasl$1() {
}

$Class* Sasl$1::load$($String* name, bool initialize) {
	$loadClass(Sasl$1, name, initialize, &_Sasl$1_ClassInfo_, allocate$Sasl$1);
	return class$;
}

$Class* Sasl$1::class$ = nullptr;

		} // sasl
	} // security
} // javax