Pod::Spec.new do |spec|
  spec.name         = 'ApsisOne'
  spec.version      = '0.7.1'
  spec.summary      = 'ApsisOne iOS SDK'
  spec.homepage     = 'http://apsis.one'
  spec.license      = { :type => "Custom", :file => "LICENSE" }
  spec.author       = { "Daniil Alferov" => "rostov-mobile-developers@efficy.com" }
  spec.platform     = :ios, '11.0'
  spec.source       = { :git => "https://github.com/ApsisInternational/rostov-app-tool-ios-framework.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = 'ApsisOne.xcframework'
end