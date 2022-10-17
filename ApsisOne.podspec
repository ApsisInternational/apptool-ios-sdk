Pod::Spec.new do |spec|
  spec.name         = 'ApsisOne'
  spec.version      = '0.10.5'
  spec.summary      = 'AppTool iOS SDK'
  spec.homepage     = 'http://apsis.one'
  spec.license      = { :type => 'Custom', :file => 'LICENSE' }
  spec.authors      = 'APSIS International AB'
  spec.platform     = :ios, '11.0'
  spec.source       = { :git => 'https://github.com/ApsisInternational/apptool-ios-sdk.git', :tag => "#{spec.version}" }
  spec.vendored_frameworks = 'ApsisOne.xcframework'
end
