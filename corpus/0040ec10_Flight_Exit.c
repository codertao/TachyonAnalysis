
/* in-flight mode exit */

void Flight_Exit(void)

{
  Flight_ServerShutdown();
  Flight_FreeAll();
  return;
}

