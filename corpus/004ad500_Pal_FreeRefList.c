
/* sweep */

void Pal_FreeRefList(void)

{
  while (DAT_0060458c != 0) {
    PalRef_Free(DAT_0060458c);
  }
  return;
}

