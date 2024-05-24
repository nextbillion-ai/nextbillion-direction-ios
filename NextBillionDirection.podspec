#
#  Be sure to run `pod spec lint NextBillionMap.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "NextBillionDirection"
  spec.version      = "1.2.1"
  spec.summary      = "The nextbillion.ai iOS  Direction cocoapods repo"

  spec.description  = <<-DESC
  This is a iOS xcframework repository, users can integrate with Nextbillion iOS Direction through cocoaPods 
                   DESC

  spec.homepage     = "https://github.com/nextbillion-ai/nextbillion-direction-ios"
  spec.license      = { :type => "MIT", :file => "LICENSE" }


  spec.author       = { "Nextbillion.AI" => "" }

  spec.source       = { :git => "https://github.com/nextbillion-ai/nextbillion-direction-ios.git" }

  spec.vendored_frameworks = 'NbmapDirections.xcframework'
  spec.platform     = :ios, '11.0'

  spec.user_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }
  spec.pod_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }

end
