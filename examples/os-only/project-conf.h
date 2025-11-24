#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

/* Disable IP stacks */
#define CONTIKI_WITH_IPV6 0
#define CONTIKI_WITH_IPV4 0

/* Keep Rime so the default NETSTACK_NETWORK symbol resolves */
#ifndef CONTIKI_WITH_RIME
#define CONTIKI_WITH_RIME 1
#endif
#define NETSTACK_CONF_WITH_RIME 1

/* Trim GUI / CTK on native */
#ifndef WITH_GUI
#define WITH_GUI 0
#endif

/* Trim link-layer security if not used */
#ifndef NETSTACK_CONF_WITH_LLSEC
#define NETSTACK_CONF_WITH_LLSEC 0
#endif

/* Reduce IP features even if headers compile */
#ifndef UIP_CONF_TCP
#define UIP_CONF_TCP 0
#endif
#ifndef UIP_CONF_UDP
#define UIP_CONF_UDP 0
#endif

#endif /* PROJECT_CONF_H_ */
