# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD$

PORTNAME=	efl
PORTVERSION=	1.13.0
CATEGORIES=	devel python enlightenment
MASTER_SITES=	http://download.enlightenment.org/rel/bindings/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-efl-${PORTVERSION}

MAINTAINER=	enlightenment@FreeBSD.org
COMMENT=	Python bindings for EFL and Elementary

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	multi

LIB_DEPENDS=	libefl.so:${PORTSDIR}/devel/efl \
		libelementary.so:${PORTSDIR}/x11-toolkits/elementary

DIST_SUBDIR=	enlightenment
USES=		pkgconfig python tar:bz2
USE_PYTHON=	autoplist distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3000
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}dbus>=0.83:${PORTSDIR}/devel/py-dbus
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}dbus>=0.83:${PORTSDIR}/devel/py-dbus
.else
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}dbus>=0.83:${PORTSDIR}/devel/py3-dbus
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}dbus>=0.83:${PORTSDIR}/devel/py3-dbus
.endif

.include <bsd.port.post.mk>
