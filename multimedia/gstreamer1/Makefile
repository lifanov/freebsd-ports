# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gstreamer1
PORTVERSION=	1.4.5
CATEGORIES=	multimedia
MASTER_SITES=	http://gstreamer.freedesktop.org/src/gstreamer/
DISTNAME=	${PORTNAME:S/1//}-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Media applications framework

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

CFLAGS:=	${CFLAGS} -O2 -Wno-format
USES=		bison gettext gmake libtool pathfix pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-tests \
		--disable-examples \
		--disable-failing-tests \
		--disable-fatal-warnings \
		--disable-gtk-doc
CONFIGURE_ENV=	ac_cv_func_register_printf_function="no"
INSTALL_TARGET=	install-strip
PLIST_SUB=	VERSION=${GST10_VERSION} \
		SOVERSION=0.405.0
USE_LDCONFIG=	yes
GST10_VERSION=	1.0

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	LIBCHECK
LIBCHECK_DESC=	Unit tests support
LIBCHECK_CONFIGURE_ENABLE=	check
LIBCHECK_LIB_DEPENDS=	libcheck.so:${PORTSDIR}/devel/libcheck

.include <bsd.port.options.mk>

# workaround a crash in clang 3.3 crash llvm bug # 15840
.if ((${OSVERSION} >= 901504 && ${OSVERSION} < 902502) || \
     (${OSVERSION} >= 1000037 && ${OSVERSION} < 1000056))
USE_GCC=	any
.endif

.if ${OSVERSION} < 1000033
BUILD_DEPENDS+=	${LOCALBASE}/bin/flex:${PORTSDIR}/textproc/flex
CONFIGURE_ENV+=	FLEX_PATH="${LOCALBASE}/bin/flex"
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
