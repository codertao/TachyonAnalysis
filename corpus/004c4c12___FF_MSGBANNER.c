
/* CRT */

void __FF_MSGBANNER(void)

{
  if ((DAT_00564f74 == 1) || ((DAT_00564f74 == 0 && (DAT_005615d8 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_005652ac != (code *)0x0) {
      (*DAT_005652ac)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}

