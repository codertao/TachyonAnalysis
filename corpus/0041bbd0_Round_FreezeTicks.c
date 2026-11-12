
/* sweep: 50*N or 1000 */

int Round_FreezeTicks(void)

{
  if (DAT_005b2b18 != 0) {
    return DAT_005b2b18 * 0x32;
  }
  return 1000;
}

