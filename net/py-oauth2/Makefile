# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD$

PORTNAME=	oauth2
PORTVERSION=	1.5.211
PORTREVISION=	3
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python library for OAuth version 1.0

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}httplib2>0:${PORTSDIR}/www/py-httplib2
TEST_DEPENDS:=	${RUN_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}coverage>0:${PORTSDIR}/devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}mock>0:${PORTSDIR}/devel/py-mock

OPTIONS_DEFINE=		TESTS
TESTS_DESC=		Install test suite requirements
TESTS_BUILD_DEPENDS=	${TEST_DEPENDS}

USES=		python:-2.7
USE_PYTHON=	autoplist distutils

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
