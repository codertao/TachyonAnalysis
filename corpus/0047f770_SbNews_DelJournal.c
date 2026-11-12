
/* sweep */

void SbNews_DelJournal(void)

{
  if (DAT_005636b4 != 0) {
    Journal_RemoveEntry(DAT_005636b4);
  }
  return;
}

