#include <hxcpp.h>

#include <worldgen/WorldGenerator.h>
#include <worldgen/World.h>
#include <worldgen/City.h>
#include <sys/io/FileOutput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/utils/Float32Array.h>
#include <openfl/utils/Endian.h>
#include <openfl/utils/CompressionAlgorithm.h>
#include <openfl/utils/ByteArray.h>
#include <openfl/utils/IDataInput.h>
#include <openfl/utils/IDataOutput.h>
#include <openfl/utils/ArrayBufferView.h>
#include <openfl/utils/IMemoryRange.h>
#include <openfl/ui/MultitouchInputMode.h>
#include <openfl/ui/Multitouch.h>
#include <openfl/ui/Mouse.h>
#include <openfl/ui/Keyboard.h>
#include <openfl/text/TextLineMetrics.h>
#include <openfl/text/TextFormatAlign.h>
#include <openfl/text/TextFormat.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/TextField.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/FontType.h>
#include <openfl/text/FontStyle.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/System.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/ScreenMode.h>
#include <openfl/system/PixelFormat.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestMethod.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLRequest.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/net/SharedObjectFlushStatus.h>
#include <openfl/net/SharedObject.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/AudioThreadState.h>
#include <openfl/media/SoundChannel.h>
#include <openfl/media/InternalAudioType.h>
#include <openfl/media/Sound.h>
#include <openfl/media/ID3Info.h>
#include <openfl/gl/GLTexture.h>
#include <openfl/gl/GLShader.h>
#include <openfl/gl/GLRenderbuffer.h>
#include <openfl/gl/GLProgram.h>
#include <openfl/gl/GLFramebuffer.h>
#include <openfl/gl/GLBuffer.h>
#include <openfl/gl/GLObject.h>
#include <openfl/gl/_GL/Float32Data_Impl_.h>
#include <openfl/gl/GL.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Transform.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/geom/ColorTransform.h>
#include <openfl/filters/BitmapFilter.h>
#include <openfl/filesystem/File.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/KeyboardEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/HTTPStatusEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/Listener.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display/TriangleCulling.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageQuality.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/TouchInfo.h>
#include <openfl/display/SpreadMethod.h>
#include <openfl/display/Shape.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/MovieClip.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/Stage.h>
#include <openfl/events/TouchEvent.h>
#include <openfl/events/MouseEvent.h>
#include <openfl/events/Event.h>
#include <openfl/display/LoaderInfo.h>
#include <openfl/net/URLLoader.h>
#include <openfl/display/Loader.h>
#include <openfl/display/LineScaleMode.h>
#include <openfl/display/JointStyle.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/IGraphicsData.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/Graphics.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/display/CapsStyle.h>
#include <openfl/display/BlendMode.h>
#include <openfl/display/BitmapDataChannel.h>
#include <openfl/display/OptimizedPerlin.h>
#include <openfl/display/Bitmap.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <openfl/Memory.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <model/Universe.h>
#include <model/Star.h>
#include <model/Planet.h>
#include <model/Civ.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Resource.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <flixel/util/loaders/TextureRegion.h>
#include <flixel/util/loaders/TexturePackerData.h>
#include <flixel/util/loaders/TextureAtlasFrame.h>
#include <flixel/util/loaders/CachedGraphics.h>
#include <flixel/util/FlxVelocity.h>
#include <flixel/util/LabelValuePair.h>
#include <flixel/util/FlxStringUtil.h>
#include <flixel/util/FlxSpriteUtil.h>
#include <flixel/util/FlxSort.h>
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#include <flixel/util/FlxRandom.h>
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#include <flixel/util/FlxCallbackPoint.h>
#include <flixel/util/FlxMath.h>
#include <flixel/util/FlxGradient.h>
#include <flixel/util/FlxDestroyUtil.h>
#include <flixel/util/FlxColorUtil.h>
#include <flixel/util/FlxColor.h>
#include <flixel/util/FlxCollision.h>
#include <flixel/util/FlxBitmapUtil.h>
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#include <flixel/util/FlxBitmapDataPool.h>
#include <flixel/util/FlxArrayUtil.h>
#include <flixel/util/FlxAngle.h>
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#include <flixel/ui/_FlxTypedButton/GraphicButton.h>
#include <flixel/ui/FlxButton.h>
#include <flixel/ui/FlxTypedButton.h>
#include <flixel/ui/FlxBar.h>
#include <flixel/tweens/motion/QuadPath.h>
#include <flixel/tweens/motion/QuadMotion.h>
#include <flixel/tweens/motion/LinearPath.h>
#include <flixel/tweens/motion/LinearMotion.h>
#include <flixel/tweens/motion/CubicMotion.h>
#include <flixel/tweens/motion/CircularMotion.h>
#include <flixel/tweens/motion/Motion.h>
#include <flixel/tweens/misc/VarTween.h>
#include <flixel/tweens/misc/NumTween.h>
#include <flixel/tweens/misc/ColorTween.h>
#include <flixel/tweens/misc/AngleTween.h>
#include <flixel/tweens/FlxEase.h>
#include <flixel/tile/FlxTilemap.h>
#include <flixel/tile/FlxTilemapBuffer.h>
#include <flixel/tile/GraphicAutoAlt.h>
#include <flixel/tile/GraphicAuto.h>
#include <flixel/tile/FlxTileblock.h>
#include <flixel/tile/FlxTile.h>
#include <flixel/text/pxText/PxFontSymbol.h>
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#include <flixel/text/pxText/PxBitmapFont.h>
#include <flixel/text/FlxTextFormat.h>
#include <flixel/text/FlxText.h>
#include <flixel/system/ui/FlxSystemButton.h>
#include <flixel/system/ui/FlxSoundTray.h>
#include <flixel/system/ui/FlxFocusLostScreen.h>
#include <flixel/system/replay/MouseRecord.h>
#include <flixel/system/replay/FrameRecord.h>
#include <flixel/system/replay/FlxReplay.h>
#include <flixel/system/replay/CodeValuePair.h>
#include <flixel/system/layer/frames/FrameType.h>
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#include <flixel/system/layer/frames/FlxFrame.h>
#include <openfl/geom/Matrix.h>
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#include <flixel/system/layer/TileSheetExt.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/geom/Point.h>
#include <flixel/system/layer/TileSheetData.h>
#include <flixel/system/layer/Region.h>
#include <flixel/system/layer/DrawStackItem.h>
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#include <flixel/system/debug/WatchEntry.h>
#include <flixel/system/debug/VCR.h>
#include <flixel/system/debug/_VCR/GraphicStop.h>
#include <flixel/system/debug/_VCR/GraphicStep.h>
#include <flixel/system/debug/_VCR/GraphicRestart.h>
#include <flixel/system/debug/_VCR/GraphicRecordOn.h>
#include <flixel/system/debug/_VCR/GraphicRecordOff.h>
#include <flixel/system/debug/_VCR/GraphicPause.h>
#include <flixel/system/debug/_VCR/GraphicOpen.h>
#include <flixel/system/debug/TrackerProfile.h>
#include <flixel/system/debug/Tracker.h>
#include <flixel/system/debug/Watch.h>
#include <flixel/system/debug/StatsGraph.h>
#include <flixel/system/debug/Stats.h>
#include <flixel/system/debug/_Stats/GraphicMaximizeButton.h>
#include <flixel/system/debug/_Stats/GraphicMinimizeButton.h>
#include <flixel/system/debug/LogStyle.h>
#include <flixel/system/debug/Log.h>
#include <flixel/system/debug/DebuggerLayout.h>
#include <flixel/system/debug/ButtonAlignment.h>
#include <flixel/system/debug/FlxDebugger.h>
#include <flixel/system/debug/GraphicArrowRight.h>
#include <flixel/system/debug/GraphicArrowLeft.h>
#include <flixel/system/debug/GraphicConsole.h>
#include <flixel/system/debug/GraphicBitmapLog.h>
#include <flixel/system/debug/GraphicWatch.h>
#include <flixel/system/debug/GraphicStats.h>
#include <flixel/system/debug/GraphicLog.h>
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#include <flixel/system/debug/DebuggerUtil.h>
#include <flixel/system/debug/ConsoleUtil.h>
#include <flixel/system/debug/ConsoleCommands.h>
#include <flixel/system/debug/Console.h>
#include <flixel/system/debug/BitmapLog.h>
#include <flixel/system/debug/Window.h>
#include <flixel/system/FlxSplash.h>
#include <flixel/system/FlxSound.h>
#include <flixel/system/FlxQuadTree.h>
#include <flixel/system/FlxList.h>
#include <flixel/system/_FlxCollisionType/FlxCollisionType_Impl_.h>
#include <flixel/system/FlxBGSprite.h>
#include <flixel/system/FlxAssets.h>
#include <flixel/system/GraphicLogo.h>
#include <flixel/system/_FlxAssets/FontDebugger.h>
#include <flixel/system/_FlxAssets/FontDefault.h>
#include <openfl/text/Font.h>
#include <flixel/interfaces/IFlxSignal.h>
#include <flixel/input/touch/FlxTouchManager.h>
#include <flixel/input/touch/FlxTouch.h>
#include <flixel/input/mouse/FlxMouseButton.h>
#include <flixel/input/mouse/FlxMouse.h>
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#include <flixel/input/keyboard/FlxKeyboard.h>
#include <flixel/input/keyboard/FlxKeyList.h>
#include <flixel/input/keyboard/FlxKey.h>
#include <flixel/input/gamepad/FlxGamepadManager.h>
#include <flixel/interfaces/IFlxInput.h>
#include <flixel/input/gamepad/FlxGamepadButton.h>
#include <flixel/input/gamepad/FlxGamepad.h>
#include <flixel/input/FlxSwipe.h>
#include <flixel/group/FlxTypedGroupIterator.h>
#include <flixel/group/FlxSpriteGroup.h>
#include <flixel/group/FlxTypedSpriteGroup.h>
#include <flixel/effects/FlxFlicker.h>
#include <flixel/util/FlxPool_flixel_effects_FlxFlicker.h>
#include <flixel/animation/FlxPrerotatedAnimation.h>
#include <flixel/animation/FlxAnimationController.h>
#include <flixel/animation/FlxAnimation.h>
#include <flixel/animation/FlxBaseAnimation.h>
#include <flixel/FlxSubState.h>
#include <flixel/FlxSprite.h>
#include <flixel/_FlxSprite/GraphicDefault.h>
#include <openfl/display/BitmapData.h>
#include <flixel/FlxObject.h>
#include <flixel/FlxGame.h>
#include <flixel/FlxG.h>
#include <flixel/util/FlxRect.h>
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#include <flixel/util/FlxSave.h>
#include <flixel/plugin/TweenManager.h>
#include <flixel/tweens/FlxTween.h>
#include <flixel/plugin/TimerManager.h>
#include <flixel/util/FlxTimer.h>
#include <flixel/plugin/PathManager.h>
#include <flixel/plugin/FlxPlugin.h>
#include <flixel/util/FlxPath.h>
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#include <haxe/Log.h>
#include <flixel/system/frontEnds/LogFrontEnd.h>
#include <flixel/system/frontEnds/InputFrontEnd.h>
#include <flixel/util/_FlxSignal/FlxTypedSignal_Impl_.h>
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#include <openfl/geom/Rectangle.h>
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#include <flixel/system/scaleModes/RatioScaleMode.h>
#include <flixel/system/scaleModes/BaseScaleMode.h>
#include <flixel/util/FlxPoint.h>
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#include <flixel/interfaces/IFlxPooled.h>
#include <flixel/system/FlxVersion.h>
#include <flixel/FlxCamera.h>
#include <culgen/LanguageGenerator.h>
#include <culgen/Language.h>
#include <culgen/CivGenerator.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/vm/Gc.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <behaviour/PrimitiveBehaviour.h>
#include <behaviour/CivBehaviour.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <RollingMask.h>
#include <Reg.h>
#include <Reflect.h>
#include <MenuState.h>
#include <flixel/FlxState.h>
#include <flixel/group/FlxGroup.h>
#include <flixel/group/FlxTypedGroup.h>
#include <flixel/FlxBasic.h>
#include <flixel/interfaces/IFlxDestroyable.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/display/Sprite.h>
#include <openfl/display/DisplayObjectContainer.h>
#include <openfl/display/InteractiveObject.h>
#include <openfl/display/DisplayObject.h>
#include <openfl/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/display/IBitmapDrawable.h>
#include <openfl/events/EventDispatcher.h>
#include <openfl/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::worldgen::WorldGenerator_obj::__register();
::worldgen::World_obj::__register();
::worldgen::City_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::Float32Array_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::utils::CompressionAlgorithm_obj::__register();
::openfl::utils::ByteArray_obj::__register();
::openfl::utils::IDataInput_obj::__register();
::openfl::utils::IDataOutput_obj::__register();
::openfl::utils::ArrayBufferView_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::openfl::ui::MultitouchInputMode_obj::__register();
::openfl::ui::Multitouch_obj::__register();
::openfl::ui::Mouse_obj::__register();
::openfl::ui::Keyboard_obj::__register();
::openfl::text::TextLineMetrics_obj::__register();
::openfl::text::TextFormatAlign_obj::__register();
::openfl::text::TextFormat_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::TextField_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::FontType_obj::__register();
::openfl::text::FontStyle_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::System_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::ScreenMode_obj::__register();
::openfl::system::PixelFormat_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestMethod_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLRequest_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::net::SharedObjectFlushStatus_obj::__register();
::openfl::net::SharedObject_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::AudioThreadState_obj::__register();
::openfl::media::SoundChannel_obj::__register();
::openfl::media::InternalAudioType_obj::__register();
::openfl::media::Sound_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::gl::GLTexture_obj::__register();
::openfl::gl::GLShader_obj::__register();
::openfl::gl::GLRenderbuffer_obj::__register();
::openfl::gl::GLProgram_obj::__register();
::openfl::gl::GLFramebuffer_obj::__register();
::openfl::gl::GLBuffer_obj::__register();
::openfl::gl::GLObject_obj::__register();
::openfl::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::gl::GL_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Transform_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::geom::ColorTransform_obj::__register();
::openfl::filters::BitmapFilter_obj::__register();
::openfl::filesystem::File_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::KeyboardEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::HTTPStatusEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::Listener_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display::TriangleCulling_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageQuality_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::TouchInfo_obj::__register();
::openfl::display::SpreadMethod_obj::__register();
::openfl::display::Shape_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::MovieClip_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::Stage_obj::__register();
::openfl::events::TouchEvent_obj::__register();
::openfl::events::MouseEvent_obj::__register();
::openfl::events::Event_obj::__register();
::openfl::display::LoaderInfo_obj::__register();
::openfl::net::URLLoader_obj::__register();
::openfl::display::Loader_obj::__register();
::openfl::display::LineScaleMode_obj::__register();
::openfl::display::JointStyle_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::IGraphicsData_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::Graphics_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::display::CapsStyle_obj::__register();
::openfl::display::BlendMode_obj::__register();
::openfl::display::BitmapDataChannel_obj::__register();
::openfl::display::OptimizedPerlin_obj::__register();
::openfl::display::Bitmap_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::openfl::Memory_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::model::Universe_obj::__register();
::model::Star_obj::__register();
::model::Planet_obj::__register();
::model::Civ_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::flixel::util::loaders::TextureRegion_obj::__register();
::flixel::util::loaders::TexturePackerData_obj::__register();
::flixel::util::loaders::TextureAtlasFrame_obj::__register();
::flixel::util::loaders::CachedGraphics_obj::__register();
::flixel::util::FlxVelocity_obj::__register();
::flixel::util::LabelValuePair_obj::__register();
::flixel::util::FlxStringUtil_obj::__register();
::flixel::util::FlxSpriteUtil_obj::__register();
::flixel::util::FlxSort_obj::__register();
::flixel::util::_FlxSignal::FlxSignal4_obj::__register();
::flixel::util::_FlxSignal::FlxSignal3_obj::__register();
::flixel::util::_FlxSignal::FlxSignal2_obj::__register();
::flixel::util::_FlxSignal::FlxSignal1_obj::__register();
::flixel::util::_FlxSignal::FlxSignal0_obj::__register();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__register();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__register();
::flixel::util::FlxRandom_obj::__register();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__register();
::flixel::util::FlxCallbackPoint_obj::__register();
::flixel::util::FlxMath_obj::__register();
::flixel::util::FlxGradient_obj::__register();
::flixel::util::FlxDestroyUtil_obj::__register();
::flixel::util::FlxColorUtil_obj::__register();
::flixel::util::FlxColor_obj::__register();
::flixel::util::FlxCollision_obj::__register();
::flixel::util::FlxBitmapUtil_obj::__register();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__register();
::flixel::util::FlxBitmapDataPool_obj::__register();
::flixel::util::FlxArrayUtil_obj::__register();
::flixel::util::FlxAngle_obj::__register();
::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__register();
::flixel::ui::_FlxTypedButton::GraphicButton_obj::__register();
::flixel::ui::FlxButton_obj::__register();
::flixel::ui::FlxTypedButton_obj::__register();
::flixel::ui::FlxBar_obj::__register();
::flixel::tweens::motion::QuadPath_obj::__register();
::flixel::tweens::motion::QuadMotion_obj::__register();
::flixel::tweens::motion::LinearPath_obj::__register();
::flixel::tweens::motion::LinearMotion_obj::__register();
::flixel::tweens::motion::CubicMotion_obj::__register();
::flixel::tweens::motion::CircularMotion_obj::__register();
::flixel::tweens::motion::Motion_obj::__register();
::flixel::tweens::misc::VarTween_obj::__register();
::flixel::tweens::misc::NumTween_obj::__register();
::flixel::tweens::misc::ColorTween_obj::__register();
::flixel::tweens::misc::AngleTween_obj::__register();
::flixel::tweens::FlxEase_obj::__register();
::flixel::tile::FlxTilemap_obj::__register();
::flixel::tile::FlxTilemapBuffer_obj::__register();
::flixel::tile::GraphicAutoAlt_obj::__register();
::flixel::tile::GraphicAuto_obj::__register();
::flixel::tile::FlxTileblock_obj::__register();
::flixel::tile::FlxTile_obj::__register();
::flixel::text::pxText::PxFontSymbol_obj::__register();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__register();
::flixel::text::pxText::PxBitmapFont_obj::__register();
::flixel::text::FlxTextFormat_obj::__register();
::flixel::text::FlxText_obj::__register();
::flixel::system::ui::FlxSystemButton_obj::__register();
::flixel::system::ui::FlxSoundTray_obj::__register();
::flixel::system::ui::FlxFocusLostScreen_obj::__register();
::flixel::system::replay::MouseRecord_obj::__register();
::flixel::system::replay::FrameRecord_obj::__register();
::flixel::system::replay::FlxReplay_obj::__register();
::flixel::system::replay::CodeValuePair_obj::__register();
::flixel::system::layer::frames::FrameType_obj::__register();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__register();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__register();
::flixel::system::layer::frames::FlxFrame_obj::__register();
::openfl::geom::Matrix_obj::__register();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__register();
::flixel::system::layer::TileSheetExt_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::geom::Point_obj::__register();
::flixel::system::layer::TileSheetData_obj::__register();
::flixel::system::layer::Region_obj::__register();
::flixel::system::layer::DrawStackItem_obj::__register();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__register();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__register();
::flixel::system::debug::WatchEntry_obj::__register();
::flixel::system::debug::VCR_obj::__register();
::flixel::system::debug::_VCR::GraphicStop_obj::__register();
::flixel::system::debug::_VCR::GraphicStep_obj::__register();
::flixel::system::debug::_VCR::GraphicRestart_obj::__register();
::flixel::system::debug::_VCR::GraphicRecordOn_obj::__register();
::flixel::system::debug::_VCR::GraphicRecordOff_obj::__register();
::flixel::system::debug::_VCR::GraphicPause_obj::__register();
::flixel::system::debug::_VCR::GraphicOpen_obj::__register();
::flixel::system::debug::TrackerProfile_obj::__register();
::flixel::system::debug::Tracker_obj::__register();
::flixel::system::debug::Watch_obj::__register();
::flixel::system::debug::StatsGraph_obj::__register();
::flixel::system::debug::Stats_obj::__register();
::flixel::system::debug::_Stats::GraphicMaximizeButton_obj::__register();
::flixel::system::debug::_Stats::GraphicMinimizeButton_obj::__register();
::flixel::system::debug::LogStyle_obj::__register();
::flixel::system::debug::Log_obj::__register();
::flixel::system::debug::DebuggerLayout_obj::__register();
::flixel::system::debug::ButtonAlignment_obj::__register();
::flixel::system::debug::FlxDebugger_obj::__register();
::flixel::system::debug::GraphicArrowRight_obj::__register();
::flixel::system::debug::GraphicArrowLeft_obj::__register();
::flixel::system::debug::GraphicConsole_obj::__register();
::flixel::system::debug::GraphicBitmapLog_obj::__register();
::flixel::system::debug::GraphicWatch_obj::__register();
::flixel::system::debug::GraphicStats_obj::__register();
::flixel::system::debug::GraphicLog_obj::__register();
::flixel::system::debug::_FlxDebugger::GraphicDrawDebug_obj::__register();
::flixel::system::debug::_FlxDebugger::GraphicFlixel_obj::__register();
::flixel::system::debug::DebuggerUtil_obj::__register();
::flixel::system::debug::ConsoleUtil_obj::__register();
::flixel::system::debug::ConsoleCommands_obj::__register();
::flixel::system::debug::Console_obj::__register();
::flixel::system::debug::BitmapLog_obj::__register();
::flixel::system::debug::Window_obj::__register();
::flixel::system::FlxSplash_obj::__register();
::flixel::system::FlxSound_obj::__register();
::flixel::system::FlxQuadTree_obj::__register();
::flixel::system::FlxList_obj::__register();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__register();
::flixel::system::FlxBGSprite_obj::__register();
::flixel::system::FlxAssets_obj::__register();
::flixel::system::GraphicLogo_obj::__register();
::flixel::system::_FlxAssets::FontDebugger_obj::__register();
::flixel::system::_FlxAssets::FontDefault_obj::__register();
::openfl::text::Font_obj::__register();
::flixel::interfaces::IFlxSignal_obj::__register();
::flixel::input::touch::FlxTouchManager_obj::__register();
::flixel::input::touch::FlxTouch_obj::__register();
::flixel::input::mouse::FlxMouseButton_obj::__register();
::flixel::input::mouse::FlxMouse_obj::__register();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__register();
::flixel::input::keyboard::FlxKeyboard_obj::__register();
::flixel::input::keyboard::FlxKeyList_obj::__register();
::flixel::input::keyboard::FlxKey_obj::__register();
::flixel::input::gamepad::FlxGamepadManager_obj::__register();
::flixel::interfaces::IFlxInput_obj::__register();
::flixel::input::gamepad::FlxGamepadButton_obj::__register();
::flixel::input::gamepad::FlxGamepad_obj::__register();
::flixel::input::FlxSwipe_obj::__register();
::flixel::group::FlxTypedGroupIterator_obj::__register();
::flixel::group::FlxSpriteGroup_obj::__register();
::flixel::group::FlxTypedSpriteGroup_obj::__register();
::flixel::effects::FlxFlicker_obj::__register();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__register();
::flixel::animation::FlxPrerotatedAnimation_obj::__register();
::flixel::animation::FlxAnimationController_obj::__register();
::flixel::animation::FlxAnimation_obj::__register();
::flixel::animation::FlxBaseAnimation_obj::__register();
::flixel::FlxSubState_obj::__register();
::flixel::FlxSprite_obj::__register();
::flixel::_FlxSprite::GraphicDefault_obj::__register();
::openfl::display::BitmapData_obj::__register();
::flixel::FlxObject_obj::__register();
::flixel::FlxGame_obj::__register();
::flixel::FlxG_obj::__register();
::flixel::util::FlxRect_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__register();
::flixel::system::frontEnds::WatchFrontEnd_obj::__register();
::flixel::system::frontEnds::VCRFrontEnd_obj::__register();
::flixel::system::frontEnds::SoundFrontEnd_obj::__register();
::flixel::system::frontEnds::SignalFrontEnd_obj::__register();
::flixel::util::FlxSave_obj::__register();
::flixel::plugin::TweenManager_obj::__register();
::flixel::tweens::FlxTween_obj::__register();
::flixel::plugin::TimerManager_obj::__register();
::flixel::util::FlxTimer_obj::__register();
::flixel::plugin::PathManager_obj::__register();
::flixel::plugin::FlxPlugin_obj::__register();
::flixel::util::FlxPath_obj::__register();
::flixel::system::frontEnds::PluginFrontEnd_obj::__register();
::haxe::Log_obj::__register();
::flixel::system::frontEnds::LogFrontEnd_obj::__register();
::flixel::system::frontEnds::InputFrontEnd_obj::__register();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__register();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__register();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__register();
::openfl::geom::Rectangle_obj::__register();
::flixel::system::frontEnds::CameraFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__register();
::flixel::system::scaleModes::RatioScaleMode_obj::__register();
::flixel::system::scaleModes::BaseScaleMode_obj::__register();
::flixel::util::FlxPoint_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__register();
::flixel::interfaces::IFlxPooled_obj::__register();
::flixel::system::FlxVersion_obj::__register();
::flixel::FlxCamera_obj::__register();
::culgen::LanguageGenerator_obj::__register();
::culgen::Language_obj::__register();
::culgen::CivGenerator_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::vm::Gc_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::behaviour::PrimitiveBehaviour_obj::__register();
::behaviour::CivBehaviour_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::RollingMask_obj::__register();
::Reg_obj::__register();
::Reflect_obj::__register();
::MenuState_obj::__register();
::flixel::FlxState_obj::__register();
::flixel::group::FlxGroup_obj::__register();
::flixel::group::FlxTypedGroup_obj::__register();
::flixel::FlxBasic_obj::__register();
::flixel::interfaces::IFlxDestroyable_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::display::Sprite_obj::__register();
::openfl::display::DisplayObjectContainer_obj::__register();
::openfl::display::InteractiveObject_obj::__register();
::openfl::display::DisplayObject_obj::__register();
::openfl::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::display::IBitmapDrawable_obj::__register();
::openfl::events::EventDispatcher_obj::__register();
::openfl::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::openfl::ui::Multitouch_obj::__init__();
::openfl::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::events::IEventDispatcher_obj::__boot();
::openfl::events::EventDispatcher_obj::__boot();
::openfl::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::Lib_obj::__boot();
::openfl::display::DisplayObject_obj::__boot();
::openfl::display::InteractiveObject_obj::__boot();
::openfl::display::DisplayObjectContainer_obj::__boot();
::openfl::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::flixel::interfaces::IFlxDestroyable_obj::__boot();
::flixel::FlxBasic_obj::__boot();
::flixel::group::FlxTypedGroup_obj::__boot();
::flixel::group::FlxGroup_obj::__boot();
::flixel::FlxState_obj::__boot();
::MenuState_obj::__boot();
::Reflect_obj::__boot();
::Reg_obj::__boot();
::RollingMask_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::behaviour::CivBehaviour_obj::__boot();
::behaviour::PrimitiveBehaviour_obj::__boot();
::culgen::CivGenerator_obj::__boot();
::culgen::Language_obj::__boot();
::culgen::LanguageGenerator_obj::__boot();
::flixel::FlxCamera_obj::__boot();
::flixel::system::FlxVersion_obj::__boot();
::flixel::interfaces::IFlxPooled_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__boot();
::flixel::util::FlxPoint_obj::__boot();
::flixel::system::scaleModes::BaseScaleMode_obj::__boot();
::flixel::system::scaleModes::RatioScaleMode_obj::__boot();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__boot();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__boot();
::flixel::system::frontEnds::CameraFrontEnd_obj::__boot();
::openfl::geom::Rectangle_obj::__boot();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__boot();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__boot();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__boot();
::flixel::system::frontEnds::InputFrontEnd_obj::__boot();
::flixel::system::frontEnds::LogFrontEnd_obj::__boot();
::flixel::system::frontEnds::PluginFrontEnd_obj::__boot();
::flixel::util::FlxPath_obj::__boot();
::flixel::plugin::FlxPlugin_obj::__boot();
::flixel::plugin::PathManager_obj::__boot();
::flixel::util::FlxTimer_obj::__boot();
::flixel::plugin::TimerManager_obj::__boot();
::flixel::tweens::FlxTween_obj::__boot();
::flixel::plugin::TweenManager_obj::__boot();
::flixel::util::FlxSave_obj::__boot();
::flixel::system::frontEnds::SignalFrontEnd_obj::__boot();
::flixel::system::frontEnds::SoundFrontEnd_obj::__boot();
::flixel::system::frontEnds::VCRFrontEnd_obj::__boot();
::flixel::system::frontEnds::WatchFrontEnd_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__boot();
::flixel::util::FlxRect_obj::__boot();
::flixel::FlxG_obj::__boot();
::flixel::FlxGame_obj::__boot();
::flixel::FlxObject_obj::__boot();
::openfl::display::BitmapData_obj::__boot();
::flixel::_FlxSprite::GraphicDefault_obj::__boot();
::flixel::FlxSprite_obj::__boot();
::flixel::FlxSubState_obj::__boot();
::flixel::animation::FlxBaseAnimation_obj::__boot();
::flixel::animation::FlxAnimation_obj::__boot();
::flixel::animation::FlxAnimationController_obj::__boot();
::flixel::animation::FlxPrerotatedAnimation_obj::__boot();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__boot();
::flixel::effects::FlxFlicker_obj::__boot();
::flixel::group::FlxTypedSpriteGroup_obj::__boot();
::flixel::group::FlxSpriteGroup_obj::__boot();
::flixel::group::FlxTypedGroupIterator_obj::__boot();
::flixel::input::FlxSwipe_obj::__boot();
::flixel::input::gamepad::FlxGamepad_obj::__boot();
::flixel::input::gamepad::FlxGamepadButton_obj::__boot();
::flixel::interfaces::IFlxInput_obj::__boot();
::flixel::input::gamepad::FlxGamepadManager_obj::__boot();
::flixel::input::keyboard::FlxKey_obj::__boot();
::flixel::input::keyboard::FlxKeyList_obj::__boot();
::flixel::input::keyboard::FlxKeyboard_obj::__boot();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__boot();
::flixel::input::mouse::FlxMouse_obj::__boot();
::flixel::input::mouse::FlxMouseButton_obj::__boot();
::flixel::input::touch::FlxTouch_obj::__boot();
::flixel::input::touch::FlxTouchManager_obj::__boot();
::flixel::interfaces::IFlxSignal_obj::__boot();
::openfl::text::Font_obj::__boot();
::flixel::system::_FlxAssets::FontDefault_obj::__boot();
::flixel::system::_FlxAssets::FontDebugger_obj::__boot();
::flixel::system::GraphicLogo_obj::__boot();
::flixel::system::FlxAssets_obj::__boot();
::flixel::system::FlxBGSprite_obj::__boot();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__boot();
::flixel::system::FlxList_obj::__boot();
::flixel::system::FlxQuadTree_obj::__boot();
::flixel::system::FlxSound_obj::__boot();
::flixel::system::FlxSplash_obj::__boot();
::flixel::system::debug::Window_obj::__boot();
::flixel::system::debug::BitmapLog_obj::__boot();
::flixel::system::debug::Console_obj::__boot();
::flixel::system::debug::ConsoleCommands_obj::__boot();
::flixel::system::debug::ConsoleUtil_obj::__boot();
::flixel::system::debug::DebuggerUtil_obj::__boot();
::flixel::system::debug::_FlxDebugger::GraphicFlixel_obj::__boot();
::flixel::system::debug::_FlxDebugger::GraphicDrawDebug_obj::__boot();
::flixel::system::debug::GraphicLog_obj::__boot();
::flixel::system::debug::GraphicStats_obj::__boot();
::flixel::system::debug::GraphicWatch_obj::__boot();
::flixel::system::debug::GraphicBitmapLog_obj::__boot();
::flixel::system::debug::GraphicConsole_obj::__boot();
::flixel::system::debug::GraphicArrowLeft_obj::__boot();
::flixel::system::debug::GraphicArrowRight_obj::__boot();
::flixel::system::debug::FlxDebugger_obj::__boot();
::flixel::system::debug::ButtonAlignment_obj::__boot();
::flixel::system::debug::DebuggerLayout_obj::__boot();
::flixel::system::debug::Log_obj::__boot();
::flixel::system::debug::LogStyle_obj::__boot();
::flixel::system::debug::_Stats::GraphicMinimizeButton_obj::__boot();
::flixel::system::debug::_Stats::GraphicMaximizeButton_obj::__boot();
::flixel::system::debug::Stats_obj::__boot();
::flixel::system::debug::StatsGraph_obj::__boot();
::flixel::system::debug::Watch_obj::__boot();
::flixel::system::debug::Tracker_obj::__boot();
::flixel::system::debug::TrackerProfile_obj::__boot();
::flixel::system::debug::_VCR::GraphicOpen_obj::__boot();
::flixel::system::debug::_VCR::GraphicPause_obj::__boot();
::flixel::system::debug::_VCR::GraphicRecordOff_obj::__boot();
::flixel::system::debug::_VCR::GraphicRecordOn_obj::__boot();
::flixel::system::debug::_VCR::GraphicRestart_obj::__boot();
::flixel::system::debug::_VCR::GraphicStep_obj::__boot();
::flixel::system::debug::_VCR::GraphicStop_obj::__boot();
::flixel::system::debug::VCR_obj::__boot();
::flixel::system::debug::WatchEntry_obj::__boot();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__boot();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__boot();
::flixel::system::layer::DrawStackItem_obj::__boot();
::flixel::system::layer::Region_obj::__boot();
::flixel::system::layer::TileSheetData_obj::__boot();
::openfl::geom::Point_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::flixel::system::layer::TileSheetExt_obj::__boot();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__boot();
::openfl::geom::Matrix_obj::__boot();
::flixel::system::layer::frames::FlxFrame_obj::__boot();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__boot();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__boot();
::flixel::system::layer::frames::FrameType_obj::__boot();
::flixel::system::replay::CodeValuePair_obj::__boot();
::flixel::system::replay::FlxReplay_obj::__boot();
::flixel::system::replay::FrameRecord_obj::__boot();
::flixel::system::replay::MouseRecord_obj::__boot();
::flixel::system::ui::FlxFocusLostScreen_obj::__boot();
::flixel::system::ui::FlxSoundTray_obj::__boot();
::flixel::system::ui::FlxSystemButton_obj::__boot();
::flixel::text::FlxText_obj::__boot();
::flixel::text::FlxTextFormat_obj::__boot();
::flixel::text::pxText::PxBitmapFont_obj::__boot();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__boot();
::flixel::text::pxText::PxFontSymbol_obj::__boot();
::flixel::tile::FlxTile_obj::__boot();
::flixel::tile::FlxTileblock_obj::__boot();
::flixel::tile::GraphicAuto_obj::__boot();
::flixel::tile::GraphicAutoAlt_obj::__boot();
::flixel::tile::FlxTilemapBuffer_obj::__boot();
::flixel::tile::FlxTilemap_obj::__boot();
::flixel::tweens::FlxEase_obj::__boot();
::flixel::tweens::misc::AngleTween_obj::__boot();
::flixel::tweens::misc::ColorTween_obj::__boot();
::flixel::tweens::misc::NumTween_obj::__boot();
::flixel::tweens::misc::VarTween_obj::__boot();
::flixel::tweens::motion::Motion_obj::__boot();
::flixel::tweens::motion::CircularMotion_obj::__boot();
::flixel::tweens::motion::CubicMotion_obj::__boot();
::flixel::tweens::motion::LinearMotion_obj::__boot();
::flixel::tweens::motion::LinearPath_obj::__boot();
::flixel::tweens::motion::QuadMotion_obj::__boot();
::flixel::tweens::motion::QuadPath_obj::__boot();
::flixel::ui::FlxBar_obj::__boot();
::flixel::ui::FlxTypedButton_obj::__boot();
::flixel::ui::FlxButton_obj::__boot();
::flixel::ui::_FlxTypedButton::GraphicButton_obj::__boot();
::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__boot();
::flixel::util::FlxAngle_obj::__boot();
::flixel::util::FlxArrayUtil_obj::__boot();
::flixel::util::FlxBitmapDataPool_obj::__boot();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__boot();
::flixel::util::FlxBitmapUtil_obj::__boot();
::flixel::util::FlxCollision_obj::__boot();
::flixel::util::FlxColor_obj::__boot();
::flixel::util::FlxColorUtil_obj::__boot();
::flixel::util::FlxDestroyUtil_obj::__boot();
::flixel::util::FlxGradient_obj::__boot();
::flixel::util::FlxMath_obj::__boot();
::flixel::util::FlxCallbackPoint_obj::__boot();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__boot();
::flixel::util::FlxRandom_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal0_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal1_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal2_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal3_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal4_obj::__boot();
::flixel::util::FlxSort_obj::__boot();
::flixel::util::FlxSpriteUtil_obj::__boot();
::flixel::util::FlxStringUtil_obj::__boot();
::flixel::util::LabelValuePair_obj::__boot();
::flixel::util::FlxVelocity_obj::__boot();
::flixel::util::loaders::CachedGraphics_obj::__boot();
::flixel::util::loaders::TextureAtlasFrame_obj::__boot();
::flixel::util::loaders::TexturePackerData_obj::__boot();
::flixel::util::loaders::TextureRegion_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::model::Civ_obj::__boot();
::model::Planet_obj::__boot();
::model::Star_obj::__boot();
::model::Universe_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::Memory_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::display::Bitmap_obj::__boot();
::openfl::display::OptimizedPerlin_obj::__boot();
::openfl::display::BitmapDataChannel_obj::__boot();
::openfl::display::BlendMode_obj::__boot();
::openfl::display::CapsStyle_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::Graphics_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::IGraphicsData_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JointStyle_obj::__boot();
::openfl::display::LineScaleMode_obj::__boot();
::openfl::display::Loader_obj::__boot();
::openfl::net::URLLoader_obj::__boot();
::openfl::display::LoaderInfo_obj::__boot();
::openfl::events::Event_obj::__boot();
::openfl::events::MouseEvent_obj::__boot();
::openfl::events::TouchEvent_obj::__boot();
::openfl::display::Stage_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::MovieClip_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Shape_obj::__boot();
::openfl::display::SpreadMethod_obj::__boot();
::openfl::display::TouchInfo_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageQuality_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::display::TriangleCulling_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::Listener_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::HTTPStatusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::KeyboardEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::filesystem::File_obj::__boot();
::openfl::filters::BitmapFilter_obj::__boot();
::openfl::geom::ColorTransform_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Transform_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::gl::GL_obj::__boot();
::openfl::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::gl::GLObject_obj::__boot();
::openfl::gl::GLBuffer_obj::__boot();
::openfl::gl::GLFramebuffer_obj::__boot();
::openfl::gl::GLProgram_obj::__boot();
::openfl::gl::GLRenderbuffer_obj::__boot();
::openfl::gl::GLShader_obj::__boot();
::openfl::gl::GLTexture_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::Sound_obj::__boot();
::openfl::media::InternalAudioType_obj::__boot();
::openfl::media::SoundChannel_obj::__boot();
::openfl::media::AudioThreadState_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::SharedObject_obj::__boot();
::openfl::net::SharedObjectFlushStatus_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequest_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLRequestMethod_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::PixelFormat_obj::__boot();
::openfl::system::ScreenMode_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::system::System_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::FontStyle_obj::__boot();
::openfl::text::FontType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextField_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::text::TextFormat_obj::__boot();
::openfl::text::TextFormatAlign_obj::__boot();
::openfl::text::TextLineMetrics_obj::__boot();
::openfl::ui::Keyboard_obj::__boot();
::openfl::ui::Mouse_obj::__boot();
::openfl::ui::Multitouch_obj::__boot();
::openfl::ui::MultitouchInputMode_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::openfl::utils::ArrayBufferView_obj::__boot();
::openfl::utils::IDataOutput_obj::__boot();
::openfl::utils::IDataInput_obj::__boot();
::openfl::utils::ByteArray_obj::__boot();
::openfl::utils::CompressionAlgorithm_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::openfl::utils::Float32Array_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::worldgen::City_obj::__boot();
::worldgen::World_obj::__boot();
::worldgen::WorldGenerator_obj::__boot();
}

