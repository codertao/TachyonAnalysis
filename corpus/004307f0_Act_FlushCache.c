
/* sweep: "Cache flushed" */

void Act_FlushCache(void)

{
  if (DAT_005a6730 != 0) {
    Gfx_HwControl1();
    TextBar_Add(s_Cache_flushed_0053eb58,DAT_005a632c._1_1_);
  }
  return;
}

