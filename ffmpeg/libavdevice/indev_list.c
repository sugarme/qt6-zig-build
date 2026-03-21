static const FFInputFormat * const indev_list[] = {
#if CONFIG_ALSA_INDEV
    &ff_alsa_demuxer,
#endif
    NULL };
