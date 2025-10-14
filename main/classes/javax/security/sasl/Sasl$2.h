#ifndef _javax_security_sasl_Sasl$2_h_
#define _javax_security_sasl_Sasl$2_h_
//$ class javax.security.sasl.Sasl$2
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class Sasl$2 : public ::java::util::Enumeration {
	$class(Sasl$2, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Sasl$2();
	void init$(::java::util::Iterator* val$iter);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Iterator* val$iter = nullptr;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_Sasl$2_h_