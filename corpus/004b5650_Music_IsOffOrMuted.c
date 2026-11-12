
/* refine: true if no music loaded or the spacesav music volume is 0 */

bool Music_IsOffOrMuted(void)

{
  if (DAT_006af504 == 0) {
    return true;
  }
  return GLBL_some_scalar_from_spacesav_in_fixed == 0;
}

