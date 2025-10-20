#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>

#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/Arrays.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef CLIENT_INT_MAGIC
#undef DI_CLASS_NAME
#undef EMPTY_BYTE_ARRAY
#undef FINER
#undef FINEST
#undef H_A1
#undef INFO
#undef SVR_INT_MAGIC

using $DigestMD5Base = ::com::sun::security::sasl::digest::DigestMD5Base;
using $SecurityCtx = ::com::sun::security::sasl::digest::SecurityCtx;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Arrays = ::java::util::Arrays;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$FieldInfo _DigestMD5Base$DigestIntegrity_FieldInfo_[] = {
	{"this$0", "Lcom/sun/security/sasl/digest/DigestMD5Base;", nullptr, $FINAL | $SYNTHETIC, $field(DigestMD5Base$DigestIntegrity, this$0)},
	{"CLIENT_INT_MAGIC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base$DigestIntegrity, CLIENT_INT_MAGIC)},
	{"SVR_INT_MAGIC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base$DigestIntegrity, SVR_INT_MAGIC)},
	{"myKi", "[B", nullptr, $PROTECTED, $field(DigestMD5Base$DigestIntegrity, myKi)},
	{"peerKi", "[B", nullptr, $PROTECTED, $field(DigestMD5Base$DigestIntegrity, peerKi)},
	{"mySeqNum", "I", nullptr, $PROTECTED, $field(DigestMD5Base$DigestIntegrity, mySeqNum)},
	{"peerSeqNum", "I", nullptr, $PROTECTED, $field(DigestMD5Base$DigestIntegrity, peerSeqNum)},
	{"messageType", "[B", nullptr, $PROTECTED | $FINAL, $field(DigestMD5Base$DigestIntegrity, messageType)},
	{"sequenceNum", "[B", nullptr, $PROTECTED | $FINAL, $field(DigestMD5Base$DigestIntegrity, sequenceNum)},
	{}
};

$MethodInfo _DigestMD5Base$DigestIntegrity_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/security/sasl/digest/DigestMD5Base;Z)V", nullptr, 0, $method(static_cast<void(DigestMD5Base$DigestIntegrity::*)($DigestMD5Base*,bool)>(&DigestMD5Base$DigestIntegrity::init$)), "javax.security.sasl.SaslException"},
	{"generateIntegrityKeyPair", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Base$DigestIntegrity::*)(bool)>(&DigestMD5Base$DigestIntegrity::generateIntegrityKeyPair)), "java.io.IOException,java.security.NoSuchAlgorithmException"},
	{"getHMAC", "([B[B[BII)[B", nullptr, $PROTECTED, nullptr, "javax.security.sasl.SaslException"},
	{"incrementSeqNum", "()V", nullptr, $PROTECTED},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$InnerClassInfo _DigestMD5Base$DigestIntegrity_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity", "com.sun.security.sasl.digest.DigestMD5Base", "DigestIntegrity", 0},
	{}
};

$ClassInfo _DigestMD5Base$DigestIntegrity_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity",
	"java.lang.Object",
	"com.sun.security.sasl.digest.SecurityCtx",
	_DigestMD5Base$DigestIntegrity_FieldInfo_,
	_DigestMD5Base$DigestIntegrity_MethodInfo_,
	nullptr,
	nullptr,
	_DigestMD5Base$DigestIntegrity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.sasl.digest.DigestMD5Base"
};

$Object* allocate$DigestMD5Base$DigestIntegrity($Class* clazz) {
	return $of($alloc(DigestMD5Base$DigestIntegrity));
}

$String* DigestMD5Base$DigestIntegrity::CLIENT_INT_MAGIC = nullptr;
$String* DigestMD5Base$DigestIntegrity::SVR_INT_MAGIC = nullptr;

void DigestMD5Base$DigestIntegrity::init$($DigestMD5Base* this$0, bool clientMode) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	this->mySeqNum = 0;
	this->peerSeqNum = 0;
	$set(this, messageType, $new($bytes, 2));
	$set(this, sequenceNum, $new($bytes, 4));
	try {
		generateIntegrityKeyPair(clientMode);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error accessing buffers required to create integrity key pairs"_s, e);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Unsupported digest algorithm used to create integrity key pairs"_s, e);
	}
	$DigestMD5Base::access$000(1, this->messageType, 0, 2);
}

void DigestMD5Base$DigestIntegrity::generateIntegrityKeyPair(bool clientMode) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, cimagic, $nc(DigestMD5Base$DigestIntegrity::CLIENT_INT_MAGIC)->getBytes(this->this$0->encoding));
	$var($bytes, simagic, $nc(DigestMD5Base$DigestIntegrity::SVR_INT_MAGIC)->getBytes(this->this$0->encoding));
	$var($MessageDigest, md5, $MessageDigest::getInstance("MD5"_s));
	$var($bytes, keyBuffer, $new($bytes, $nc(this->this$0->H_A1)->length + cimagic->length));
	$System::arraycopy(this->this$0->H_A1, 0, keyBuffer, 0, $nc(this->this$0->H_A1)->length);
	$System::arraycopy(cimagic, 0, keyBuffer, $nc(this->this$0->H_A1)->length, cimagic->length);
	$nc(md5)->update(keyBuffer);
	$var($bytes, Kic, md5->digest());
	$System::arraycopy(simagic, 0, keyBuffer, $nc(this->this$0->H_A1)->length, simagic->length);
	md5->update(keyBuffer);
	$var($bytes, Kis, md5->digest());
	$init($Level);
	if ($nc($($DigestMD5Base::access$100()))->isLoggable($Level::FINER)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$200($DigestMD5Base::DI_CLASS_NAME, "generateIntegrityKeyPair"_s, "DIGEST12:Kic: "_s, Kic);
		$DigestMD5Base::access$300($DigestMD5Base::DI_CLASS_NAME, "generateIntegrityKeyPair"_s, "DIGEST13:Kis: "_s, Kis);
	}
	if (clientMode) {
		$set(this, myKi, Kic);
		$set(this, peerKi, Kis);
	} else {
		$set(this, myKi, Kis);
		$set(this, peerKi, Kic);
	}
}

$bytes* DigestMD5Base$DigestIntegrity::wrap($bytes* outgoing, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	$var($bytes, wrapped, $new($bytes, len + 10 + 2 + 4));
	$System::arraycopy(outgoing, start, wrapped, 0, len);
	incrementSeqNum();
	$var($bytes, mac, getHMAC(this->myKi, this->sequenceNum, outgoing, start, len));
	$init($Level);
	if ($nc($($DigestMD5Base::access$400()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$500($DigestMD5Base::DI_CLASS_NAME, "wrap"_s, "DIGEST14:outgoing: "_s, outgoing, start, len);
		$DigestMD5Base::access$600($DigestMD5Base::DI_CLASS_NAME, "wrap"_s, "DIGEST15:seqNum: "_s, this->sequenceNum);
		$DigestMD5Base::access$700($DigestMD5Base::DI_CLASS_NAME, "wrap"_s, "DIGEST16:MAC: "_s, mac);
	}
	$System::arraycopy(mac, 0, wrapped, len, 10);
	$System::arraycopy(this->messageType, 0, wrapped, len + 10, 2);
	$System::arraycopy(this->sequenceNum, 0, wrapped, len + 12, 4);
	if ($nc($($DigestMD5Base::access$800()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$900($DigestMD5Base::DI_CLASS_NAME, "wrap"_s, "DIGEST17:wrapped: "_s, wrapped);
	}
	return wrapped;
}

$bytes* DigestMD5Base$DigestIntegrity::unwrap($bytes* incoming, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	$var($bytes, mac, $new($bytes, 10));
	$var($bytes, msg, $new($bytes, len - 16));
	$var($bytes, msgType, $new($bytes, 2));
	$var($bytes, seqNum, $new($bytes, 4));
	$System::arraycopy(incoming, start, msg, 0, msg->length);
	$System::arraycopy(incoming, start + msg->length, mac, 0, 10);
	$System::arraycopy(incoming, start + msg->length + 10, msgType, 0, 2);
	$System::arraycopy(incoming, start + msg->length + 12, seqNum, 0, 4);
	$var($bytes, expectedMac, getHMAC(this->peerKi, seqNum, msg, 0, msg->length));
	$init($Level);
	if ($nc($($DigestMD5Base::access$1000()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$1100($DigestMD5Base::DI_CLASS_NAME, "unwrap"_s, "DIGEST18:incoming: "_s, msg);
		$DigestMD5Base::access$1200($DigestMD5Base::DI_CLASS_NAME, "unwrap"_s, "DIGEST19:MAC: "_s, mac);
		$DigestMD5Base::access$1300($DigestMD5Base::DI_CLASS_NAME, "unwrap"_s, "DIGEST20:messageType: "_s, msgType);
		$DigestMD5Base::access$1400($DigestMD5Base::DI_CLASS_NAME, "unwrap"_s, "DIGEST21:sequenceNum: "_s, seqNum);
		$DigestMD5Base::access$1500($DigestMD5Base::DI_CLASS_NAME, "unwrap"_s, "DIGEST22:expectedMAC: "_s, expectedMac);
	}
	if (!$Arrays::equals(mac, expectedMac)) {
		$nc($($DigestMD5Base::access$1600()))->log($Level::INFO, "DIGEST23:Unmatched MACs"_s);
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	if (this->peerSeqNum != $DigestMD5Base::access$1700(seqNum, 0, 4)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Out of order sequencing of messages from server. Got: "_s, $$str($DigestMD5Base::access$1800(seqNum, 0, 4)), " Expected: "_s, $$str(this->peerSeqNum)}));
	}
	if (!$Arrays::equals(this->messageType, msgType)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: invalid message type: "_s, $$str($DigestMD5Base::access$1900(msgType, 0, 2))}));
	}
	++this->peerSeqNum;
	return msg;
}

$bytes* DigestMD5Base$DigestIntegrity::getHMAC($bytes* Ki, $bytes* seqnum, $bytes* msg, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, seqAndMsg, $new($bytes, 4 + len));
	$System::arraycopy(seqnum, 0, seqAndMsg, 0, 4);
	$System::arraycopy(msg, start, seqAndMsg, 4, len);
	try {
		$var($SecretKey, keyKi, $new($SecretKeySpec, Ki, "HmacMD5"_s));
		$var($Mac, m, $Mac::getInstance("HmacMD5"_s));
		$nc(m)->init(keyKi);
		m->update(seqAndMsg);
		$var($bytes, hMAC_MD5, m->doFinal());
		$var($bytes, macBuffer, $new($bytes, 10));
		$System::arraycopy(hMAC_MD5, 0, macBuffer, 0, 10);
		return macBuffer;
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Invalid bytes used for key of HMAC-MD5 hash."_s, e);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error creating instance of MD5 digest algorithm"_s, e);
	}
	$shouldNotReachHere();
}

void DigestMD5Base$DigestIntegrity::incrementSeqNum() {
	$DigestMD5Base::access$2000(this->mySeqNum++, this->sequenceNum, 0, 4);
}

DigestMD5Base$DigestIntegrity::DigestMD5Base$DigestIntegrity() {
}

void clinit$DigestMD5Base$DigestIntegrity($Class* class$) {
	$assignStatic(DigestMD5Base$DigestIntegrity::CLIENT_INT_MAGIC, "Digest session key to client-to-server signing key magic constant"_s);
	$assignStatic(DigestMD5Base$DigestIntegrity::SVR_INT_MAGIC, "Digest session key to server-to-client signing key magic constant"_s);
}

$Class* DigestMD5Base$DigestIntegrity::load$($String* name, bool initialize) {
	$loadClass(DigestMD5Base$DigestIntegrity, name, initialize, &_DigestMD5Base$DigestIntegrity_ClassInfo_, clinit$DigestMD5Base$DigestIntegrity, allocate$DigestMD5Base$DigestIntegrity);
	return class$;
}

$Class* DigestMD5Base$DigestIntegrity::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com