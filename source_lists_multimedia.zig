// Source file lists for Qt 6.8.3 QtMultimedia static build with Zig
// Generated from Qt CMakeLists.txt analysis
// Target: Windows x86_64

// ============================================================================
// QtMultimedia - common (cross-platform) sources
// Base path: qtmultimedia/src/multimedia/
// ============================================================================

pub const qtmultimedia_common_sources: []const []const u8 = &.{
    // audio/
    "audio/qaudiobuffer.cpp",
    "audio/qaudiobufferinput.cpp",
    "audio/qaudiobufferoutput.cpp",
    "audio/qaudiodecoder.cpp",
    "audio/qaudiodevice.cpp",
    "audio/qaudioformat.cpp",
    "audio/qaudiohelpers.cpp",
    "audio/qaudioinput.cpp",
    "audio/qaudiooutput.cpp",
    "audio/qaudiosink.cpp",
    "audio/qaudiosource.cpp",
    "audio/qaudiostatemachine.cpp",
    "audio/qaudiosystem.cpp",
    "audio/qsamplecache_p.cpp",
    "audio/qsoundeffect.cpp",
    "audio/qtaudio.cpp",
    "audio/qwavedecoder.cpp",
    // camera/
    "camera/qcamera.cpp",
    "camera/qcameradevice.cpp",
    "camera/qimagecapture.cpp",
    // compat/
    "compat/removed_api.cpp",
    // platform/
    "platform/qgstreamer_platformspecificinterface.cpp",
    "platform/qplatformaudiobufferinput.cpp",
    "platform/qplatformaudiodecoder.cpp",
    "platform/qplatformaudiodevices.cpp",
    "platform/qplatformcamera.cpp",
    "platform/qplatformimagecapture.cpp",
    "platform/qplatformmediacapture.cpp",
    "platform/qplatformmediaformatinfo.cpp",
    "platform/qplatformmediaintegration.cpp",
    "platform/qplatformmediaplayer.cpp",
    "platform/qplatformmediaplugin.cpp",
    "platform/qplatformmediarecorder.cpp",
    "platform/qplatformsurfacecapture.cpp",
    "platform/qplatformvideodevices.cpp",
    "platform/qplatformvideoframeinput.cpp",
    "platform/qplatformvideosink.cpp",
    "platform/qplatformvideosource.cpp",
    // playback/
    "playback/qmediaplayer.cpp",
    // recording/
    "recording/qcapturablewindow.cpp",
    "recording/qmediacapturesession.cpp",
    "recording/qmediarecorder.cpp",
    "recording/qscreencapture.cpp",
    "recording/qvideoframeinput.cpp",
    "recording/qwindowcapture.cpp",
    // video/
    "video/qabstractvideobuffer.cpp",
    "video/qhwvideobuffer.cpp",
    "video/qimagevideobuffer.cpp",
    "video/qmemoryvideobuffer.cpp",
    "video/qtvideo.cpp",
    "video/qvideoframe.cpp",
    "video/qvideoframeconversionhelper.cpp",
    "video/qvideoframeconverter.cpp",
    "video/qvideoframeformat.cpp",
    "video/qvideoframetexturefromsource.cpp",
    "video/qvideoframetexturepool.cpp",
    "video/qvideooutputorientationhandler.cpp",
    "video/qvideosink.cpp",
    "video/qvideotexturehelper.cpp",
    "video/qvideowindow.cpp",
    // root-level
    "qmediadevices.cpp",
    "qmediaformat.cpp",
    "qmediaframeinput.cpp",
    "qmediametadata.cpp",
    "qmediastoragelocation.cpp",
    "qmediatimerange.cpp",
    "qmultimediautils.cpp",
    "qrhivaluemapper.cpp",
    "qthreadlocalrhi.cpp",
    "qvideotransformation.cpp",
};

// SIMD-specific sources (compiled with special flags)
pub const qtmultimedia_simd_sse2_sources: []const []const u8 = &.{
    "video/qvideoframeconversionhelper_sse2.cpp",
};

pub const qtmultimedia_simd_ssse3_sources: []const []const u8 = &.{
    "video/qvideoframeconversionhelper_ssse3.cpp",
};

pub const qtmultimedia_simd_avx2_sources: []const []const u8 = &.{
    "video/qvideoframeconversionhelper_avx2.cpp",
};

// ============================================================================
// QtMultimedia - Windows-specific sources (QT_FEATURE_wmf + WIN32)
// Base path: qtmultimedia/src/multimedia/
// ============================================================================

pub const qtmultimedia_win_sources: []const []const u8 = &.{
    // WIN32 auto-reset event
    "audio/qautoresetevent_win32.cpp",
    // QT_FEATURE_wmf sources
    "windows/qcominitializer.cpp",
    "windows/qwindowsaudiodevice.cpp",
    "windows/qwindowsaudiodevices.cpp",
    "windows/qwindowsaudiosink.cpp",
    "windows/qwindowsaudiosource.cpp",
    "windows/qwindowsaudioutils.cpp",
    "windows/qwindowsmediafoundation.cpp",
    "windows/qwindowsmfdefs.cpp",
    "windows/qwindowsmultimediautils.cpp",
    "windows/qwindowsresampler.cpp",
};

// ============================================================================
// QtMultimedia - MOC headers (Q_OBJECT / Q_GADGET)
// Base path: qtmultimedia/src/multimedia/
// ============================================================================

pub const qtmultimedia_moc_headers: []const []const u8 = &.{
    // audio/
    "audio/qaudiobufferinput.h",
    "audio/qaudiobufferoutput.h",
    "audio/qaudiodecoder.h",
    "audio/qaudiodevice.h",
    "audio/qaudioinput.h",
    "audio/qaudiooutput.h",
    "audio/qaudiosink.h",
    "audio/qaudiosource.h",
    "audio/qaudiosystem_p.h",
    "audio/qsamplecache_p.h",
    "audio/qsoundeffect.h",
    "audio/qwavedecoder.h",
    // camera/
    "camera/qcamera.h",
    "camera/qcameradevice.h",
    "camera/qimagecapture.h",
    // platform/
    "platform/qplatformaudiobufferinput_p.h",
    "platform/qplatformaudiodecoder_p.h",
    "platform/qplatformaudiodevices_p.h",
    "platform/qplatformcamera_p.h",
    "platform/qplatformimagecapture_p.h",
    "platform/qplatformmediacapture_p.h",
    "platform/qplatformmediaintegration_p.h",
    "platform/qplatformmediaplugin_p.h",
    "platform/qplatformsurfacecapture_p.h",
    "platform/qplatformvideodevices_p.h",
    "platform/qplatformvideoframeinput_p.h",
    "platform/qplatformvideosink_p.h",
    "platform/qplatformvideosource_p.h",
    // playback/
    "playback/qmediaplayer.h",
    // recording/
    "recording/qcapturablewindow.h",
    "recording/qmediacapturesession.h",
    "recording/qmediarecorder.h",
    "recording/qscreencapture.h",
    "recording/qvideoframeinput.h",
    "recording/qwindowcapture.h",
    // video/
    "video/qvideoframe.h",
    "video/qvideoframeformat.h",
    "video/qvideooutputorientationhandler_p.h",
    "video/qvideosink.h",
    "video/qvideowindow_p.h",
    // root-level
    "qmediadevices.h",
    "qmediaformat.h",
    "qmediametadata.h",
    "video/qtvideo.h",
};

// Windows-specific MOC headers
pub const qtmultimedia_win_moc_headers: []const []const u8 = &.{
    "audio/qautoresetevent_win32_p.h",
    "windows/qwindowsaudiosink_p.h",
    "windows/qwindowsaudiosource_p.h",
};

// ============================================================================
// QtMultimedia - .cpp files that #include "*.moc"
// Base path: qtmultimedia/src/multimedia/
// ============================================================================

pub const qtmultimedia_moc_sources: []const []const u8 = &.{
    "windows/qwindowsaudiosink.cpp",
};

// ============================================================================
// FFmpeg media plugin - common (cross-platform) sources
// Base path: qtmultimedia/src/plugins/multimedia/ffmpeg/
// ============================================================================

pub const qtmultimedia_ffmpeg_common_sources: []const []const u8 = &.{
    // playback engine
    "playbackengine/qffmpegaudiorenderer.cpp",
    "playbackengine/qffmpegcodeccontext.cpp",
    "playbackengine/qffmpegdemuxer.cpp",
    "playbackengine/qffmpegmediadataholder.cpp",
    "playbackengine/qffmpegplaybackengineobject.cpp",
    "playbackengine/qffmpegrenderer.cpp",
    "playbackengine/qffmpegstreamdecoder.cpp",
    "playbackengine/qffmpegsubtitlerenderer.cpp",
    "playbackengine/qffmpegtimecontroller.cpp",
    "playbackengine/qffmpegvideorenderer.cpp",
    // recording engine
    "recordingengine/qffmpegaudioencoder.cpp",
    "recordingengine/qffmpegaudioencoderutils.cpp",
    "recordingengine/qffmpegencoderoptions.cpp",
    "recordingengine/qffmpegencoderthread.cpp",
    "recordingengine/qffmpegencodinginitializer.cpp",
    "recordingengine/qffmpegmuxer.cpp",
    "recordingengine/qffmpegrecordingengine.cpp",
    "recordingengine/qffmpegrecordingengineutils.cpp",
    "recordingengine/qffmpegvideoencoder.cpp",
    "recordingengine/qffmpegvideoencoderutils.cpp",
    "recordingengine/qffmpegvideoframeencoder.cpp",
    // root-level
    "qffmpeg.cpp",
    "qffmpegaudiodecoder.cpp",
    "qffmpegaudioinput.cpp",
    "qffmpegavaudioformat.cpp",
    "qffmpegcodec.cpp",
    "qffmpegcodecstorage.cpp",
    "qffmpegconverter.cpp",
    "qffmpegencodingformatcontext.cpp",
    "qffmpeghwaccel.cpp",
    "qffmpegimagecapture.cpp",
    "qffmpegioutils.cpp",
    "qffmpegmediacapturesession.cpp",
    "qffmpegmediaformatinfo.cpp",
    "qffmpegmediaintegration.cpp",
    "qffmpegmediametadata.cpp",
    "qffmpegmediaplayer.cpp",
    "qffmpegmediarecorder.cpp",
    "qffmpegplaybackengine.cpp",
    "qffmpegplugin.cpp",
    "qffmpegresampler.cpp",
    "qffmpegsurfacecapturegrabber.cpp",
    "qffmpegtextureconverter.cpp",
    "qffmpegthread.cpp",
    "qffmpegvideobuffer.cpp",
    "qffmpegvideosink.cpp",
    "qgrabwindowsurfacecapture.cpp",
};

// ============================================================================
// FFmpeg media plugin - Windows-specific sources
// Base path: qtmultimedia/src/plugins/multimedia/ffmpeg/
// ============================================================================

pub const qtmultimedia_ffmpeg_win_sources: []const []const u8 = &.{
    // WIN32 sources
    "qffmpeghwaccel_d3d11.cpp",
    "qffmpegscreencapture_dxgi.cpp",
    "qgdiwindowcapture.cpp",
    "qwincapturablewindows.cpp",
    "qwindowscamera.cpp",
    // qffmpegwindowcapture_uwp.cpp excluded: requires C++/WinRT (QT_FEATURE_cpp_winrt)
};

// Windows video devices source (from sibling windows/ plugin directory)
// Base path: qtmultimedia/src/plugins/multimedia/windows/
pub const qtmultimedia_ffmpeg_win_sibling_sources: []const []const u8 = &.{
    "qwindowsvideodevices.cpp",
};

// ============================================================================
// FFmpeg media plugin - MOC headers (Q_OBJECT / Q_GADGET)
// Base path: qtmultimedia/src/plugins/multimedia/ffmpeg/
// ============================================================================

pub const qtmultimedia_ffmpeg_common_moc_headers: []const []const u8 = &.{
    // playback engine
    "playbackengine/qffmpegaudiorenderer_p.h",
    "playbackengine/qffmpegdemuxer_p.h",
    "playbackengine/qffmpegplaybackengineobject_p.h",
    "playbackengine/qffmpegrenderer_p.h",
    "playbackengine/qffmpegstreamdecoder_p.h",
    "playbackengine/qffmpegsubtitlerenderer_p.h",
    "playbackengine/qffmpegvideorenderer_p.h",
    // recording engine
    "recordingengine/qffmpegencoderthread_p.h",
    "recordingengine/qffmpegrecordingengine_p.h",
    // root-level
    "qffmpegaudiodecoder_p.h",
    "qffmpegaudioinput_p.h",
    "qffmpegimagecapture_p.h",
    "qffmpegmediacapturesession_p.h",
    "qffmpegmediaplayer_p.h",
    "qffmpegmediarecorder_p.h",
    "qffmpegplaybackengine_p.h",
    "qffmpegsurfacecapturegrabber_p.h",
    "qffmpegvideosink_p.h",
};

pub const qtmultimedia_ffmpeg_win_moc_headers: []const []const u8 = &.{
    "qwindowscamera_p.h",
};

// FFmpeg .cpp files that #include "*.moc"
pub const qtmultimedia_ffmpeg_moc_sources: []const []const u8 = &.{
    "qffmpegaudiodecoder.cpp",
    "qffmpegaudioinput.cpp",
    "qffmpegplugin.cpp",
};

// ============================================================================
// QtSpatialAudio sources
// Base path: qtmultimedia/src/spatialaudio/
// ============================================================================

pub const qtspatialaudio_sources: []const []const u8 = &.{
    "qambientsound.cpp",
    "qambisonicdecoder.cpp",
    "qaudioengine.cpp",
    "qaudiolistener.cpp",
    "qaudioroom.cpp",
    "qspatialsound.cpp",
};

// ============================================================================
// QtSpatialAudio - MOC headers (Q_OBJECT / Q_GADGET)
// Base path: qtmultimedia/src/spatialaudio/
// ============================================================================

pub const qtspatialaudio_moc_headers: []const []const u8 = &.{
    "qambientsound.h",
    "qaudioengine.h",
    "qaudioroom.h",
    "qspatialsound.h",
};

// QtSpatialAudio .cpp files that #include "*.moc"
pub const qtspatialaudio_moc_sources: []const []const u8 = &.{
    "qaudioengine.cpp",
};

// ============================================================================
// Resonance Audio sources (3rdparty library used by QtSpatialAudio)
// Base path: qtmultimedia/src/3rdparty/resonance-audio/
// Sources from Qt's CMakeLists.txt (excludes test files)
// ============================================================================

pub const resonance_audio_sources: []const []const u8 = &.{
    // platforms/common
    "platforms/common/room_effects_utils.cc",
    "platforms/common/utils.cc",
    // ambisonics
    "resonance_audio/ambisonics/ambisonic_binaural_decoder.cc",
    "resonance_audio/ambisonics/ambisonic_lookup_table.cc",
    "resonance_audio/ambisonics/associated_legendre_polynomials_generator.cc",
    "resonance_audio/ambisonics/foa_rotator.cc",
    "resonance_audio/ambisonics/hoa_rotator.cc",
    "resonance_audio/ambisonics/stereo_from_soundfield_converter.cc",
    // api
    "resonance_audio/api/binaural_surround_renderer.cc",
    "resonance_audio/api/resonance_audio_api.cc",
    // base
    "resonance_audio/base/audio_buffer.cc",
    "resonance_audio/base/channel_view.cc",
    "resonance_audio/base/misc_math.cc",
    "resonance_audio/base/simd_utils.cc",
    "resonance_audio/base/spherical_angle.cc",
    // config
    "resonance_audio/config/source_config.cc",
    // dsp
    "resonance_audio/dsp/biquad_filter.cc",
    "resonance_audio/dsp/channel_converter.cc",
    "resonance_audio/dsp/circular_buffer.cc",
    "resonance_audio/dsp/delay_filter.cc",
    "resonance_audio/dsp/distance_attenuation.cc",
    "resonance_audio/dsp/fft_manager.cc",
    "resonance_audio/dsp/filter_coefficient_generators.cc",
    "resonance_audio/dsp/fir_filter.cc",
    "resonance_audio/dsp/gain.cc",
    "resonance_audio/dsp/gain_mixer.cc",
    "resonance_audio/dsp/gain_processor.cc",
    "resonance_audio/dsp/mixer.cc",
    "resonance_audio/dsp/mono_pole_filter.cc",
    "resonance_audio/dsp/multi_channel_iir.cc",
    "resonance_audio/dsp/near_field_processor.cc",
    "resonance_audio/dsp/occlusion_calculator.cc",
    "resonance_audio/dsp/partitioned_fft_filter.cc",
    "resonance_audio/dsp/reflections_processor.cc",
    "resonance_audio/dsp/resampler.cc",
    "resonance_audio/dsp/reverb_onset_compensator.cc",
    "resonance_audio/dsp/reverb_onset_update_processor.cc",
    "resonance_audio/dsp/sh_hrir_creator.cc",
    "resonance_audio/dsp/shoe_box_room.cc",
    "resonance_audio/dsp/spectral_reverb.cc",
    "resonance_audio/dsp/stereo_panner.cc",
    "resonance_audio/dsp/utils.cc",
    // graph
    "resonance_audio/graph/ambisonic_binaural_decoder_node.cc",
    "resonance_audio/graph/ambisonic_mixing_encoder_node.cc",
    "resonance_audio/graph/binaural_surround_renderer_impl.cc",
    "resonance_audio/graph/buffered_source_node.cc",
    "resonance_audio/graph/foa_rotator_node.cc",
    "resonance_audio/graph/gain_mixer_node.cc",
    "resonance_audio/graph/gain_node.cc",
    "resonance_audio/graph/graph_manager.cc",
    "resonance_audio/graph/hoa_rotator_node.cc",
    "resonance_audio/graph/mixer_node.cc",
    "resonance_audio/graph/mono_from_soundfield_node.cc",
    "resonance_audio/graph/near_field_effect_node.cc",
    "resonance_audio/graph/occlusion_node.cc",
    "resonance_audio/graph/reflections_node.cc",
    "resonance_audio/graph/resonance_audio_api_impl.cc",
    "resonance_audio/graph/reverb_node.cc",
    "resonance_audio/graph/source_parameters_manager.cc",
    "resonance_audio/graph/stereo_mixing_panner_node.cc",
    // node
    "resonance_audio/node/processing_node.cc",
    "resonance_audio/node/sink_node.cc",
    "resonance_audio/node/source_node.cc",
    // utils
    "resonance_audio/utils/buffer_crossfader.cc",
    "resonance_audio/utils/buffer_partitioner.cc",
    "resonance_audio/utils/buffer_unpartitioner.cc",
    "resonance_audio/utils/lockless_task_queue.cc",
    "resonance_audio/utils/planar_interleaved_conversion.cc",
    "resonance_audio/utils/sample_type_conversion.cc",
    "resonance_audio/utils/sum_and_difference_processor.cc",
    "resonance_audio/utils/wav.cc",
    "resonance_audio/utils/wav_reader.cc",
    // third_party
    "third_party/SADIE_hrtf_database/generated/hrtf_assets.cc",
};

// Resonance Audio wrapper source (Qt integration layer)
// Base path: qtmultimedia/src/resonance-audio/
pub const resonance_audio_qt_sources: []const []const u8 = &.{
    "resonance_audio.cpp",
};

// ============================================================================
// pffft (used by Resonance Audio for FFT)
// Base path: qtmultimedia/src/3rdparty/pffft/
// ============================================================================

pub const pffft_sources: []const []const u8 = &.{
    "pffft.c",
};
